#include "main.h"

/**
 * open_file_from - Ouvre uniquement le fichier source en lecture seule.
 * @file: Nom du fichier source.
 * Return: Descripteur de fichier, ou quitte avec code 98 si erreur.
 */
int open_file_from(char *file)
{
	int fd = open(file, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (fd);
}

/**
 * copy_and_close - Copie le contenu du fichier source vers le fichier destination.
 * @fd_from: Descripteur du fichier source.
 * @file_from: Nom du fichier source (pour messages d'erreur).
 * @file_to: Nom du fichier destination.
 */
void copy_and_close(int fd_from, char *file_from, char *file_to)
{
	char *buffer = malloc(1024);
	ssize_t bytes_read, bytes_written;
	int fd_to;

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		close(fd_from);
		exit(99);
	}

	bytes_read = read(fd_from, buffer, 1024);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		free(buffer);
		close(fd_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		free(buffer);
		close(fd_from);
		exit(99);
	}

	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		free(buffer);
		close(fd_from);
		close(fd_to);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buffer);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		free(buffer);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	free(buffer);
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
		        (close(fd_from) == -1) ? fd_from : fd_to);
		exit(100);
	}
}

/**
 * main - Point d'entrée du programme.
 * @argc: Nombre d'arguments.
 * @argv: Tableau des arguments.
 * Return: 0 si succès, ou codes d'erreur (97, 98, 99, 100).
 */
int main(int argc, char *argv[])
{
	int fd_from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file_from(argv[1]);
	copy_and_close(fd_from, argv[1], argv[2]);

	return (0);
}
