#include "main.h"

/**
 * open_files - Opens the source and destination files.
 * @argv: Array of arguments (file_from and file_to).
 * @fd_from: Pointer to the file descriptor of the source file.
 * @fd_to: Pointer to the file descriptor of the destination file.
 */
void open_files(char *argv[], int *fd_from, int *fd_to)
{
	*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	*fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(*fd_from);
		exit(99);
	}
}

/**
 * copy_and_close - Copies content from source to destination and closes files.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 * @argv: Array of arguments (used for error messages).
 */

void copy_and_close(int fd_from, int fd_to, char *argv[])
{
	char *buffer = malloc(1024);
	ssize_t bytes_read, bytes_written;

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		close(fd_from), close(fd_to);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer), close(fd_from), close(fd_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer), close(fd_from), close(fd_to);
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
 * main - Copies the content of one file to another.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments (file_from and file_to).
 *
 * Return: 0 on success, or exit with specific codes on failure:
 *         97 - Incorrect number of arguments.
 *         98 - Cannot read from file_from.
 *         99 - Cannot write to file_to.
 *         100 - Cannot close a file descriptor.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_files(argv, &fd_from, &fd_to);
	copy_and_close(fd_from, fd_to, argv);

	return (0);
}
