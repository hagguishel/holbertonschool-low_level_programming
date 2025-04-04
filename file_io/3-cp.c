#include "main.h"

/**
 * open_file_from - Ouvre un fichier en lecture seule.
 * @file: Nom du fichier.
 * Return: Descripteur ou quitte avec code 98.
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
 * open_file_to - Ouvre un fichier en écriture (création/troncature).
 * @file: Nom du fichier.
 * Return: Descripteur ou quitte avec code 99.
 */
int open_file_to(char *file)
{
	int fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (fd);
}

/**
 * close_files - Ferme deux fichiers et gère les erreurs.
 * @fd_from: Descripteur source.
 * @fd_to: Descripteur destination.
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * copy_and_close - Copie contenu d'un fichier à un autre.
 * @fd_from: Descripteur source.
 * @file_from: Nom du fichier source.
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

	fd_to = open_file_to(file_to);
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
	close_files(fd_from, fd_to);
}

/**
 * main - Point d'entrée. Copie un fichier vers un autre.
 * @argc: Nombre d'arguments.
 * @argv: Tableaux d'arguments.
 * Return: 0 si succès, code d'erreur sinon.
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
