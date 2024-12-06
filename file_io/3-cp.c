#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * error_exit - Handles errors and exits with a specific code and message.
 * @code: The exit code.
 * @message: The error message.
 * @fd_value: The file descriptor causing the error (if applicable).
 */
void error_exit(int code, char *message, int fd_value)
{
	if (fd_value == -1)
	dprintf(STDERR_FILENO, "%s", message);
	else
	dprintf(STDERR_FILENO, message, fd_value);
	exit(code);
}

/**
 * main - Copies the content of one file to another.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: Always 0 on success, exits with code 97, 98, 99, or 100 on failure.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	error_exit(97, "Usage: cp file_from file_to\n", -1);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	error_exit(98, "Error: Can't read from file %s\n", -1);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	error_exit(99, "Error: Can't write to %s\n", -1);

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		error_exit(99, "Error: Can't write to %s\n", -1);
	}

	if (bytes_read == -1)
	error_exit(98, "Error: Can't read from file %s\n", -1);

	if (close(fd_from) == -1)
	error_exit(100, "Error: Can't close fd\n", fd_from);
	if (close(fd_to) == -1)
	error_exit(100, "Error: Can't close fd\n", fd_to);

	return (0);
}
