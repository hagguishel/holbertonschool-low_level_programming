#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier
 * @filename: nom du fichier
 * @text_content: texte à ajouter (NULL = rien à écrire)
 *
 * Return: 1 en cas de succès, -1 en cas d'erreur
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[len])
		len++;

	written = write(fd, text_content, len);
	if (written == -1 || (size_t)written != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
