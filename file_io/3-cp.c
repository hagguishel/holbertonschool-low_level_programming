#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Gère l'affichage d'erreurs et quitte avec le bon code
 * @code: code de sortie
 * @message: message d'erreur
 * @arg: argument à afficher (nom du fichier ou fd)
 */
void print_error(int code, const char *message, const char *arg)
{
	if (code == 100)
		dprintf(STDERR_FILENO, "%s %d\n", message, atoi(arg));
	else
		dprintf(STDERR_FILENO, "%s %s\n", message, arg);
	exit(code);
}

/**
 * main - copie le contenu d'un fichier dans un autre
 * @ac: nombre d'arguments
 * @av: tableau d'arguments
 *
 * Return: 0 en cas de succès, un code d’erreur sinon
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		print_error(97, "Usage: cp file_from file_to", "");

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file", av[1]);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to", av[2]);
	}

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to", av[2]);
		}
	}
	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file", av[1]);
	}

	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close fd", av[1]);

	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd", av[2]);

	return (0);
}
