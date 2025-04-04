#include "main.h"

/**
 * create_file - Crée un fichier et y écrit du texte.
 * @filename: Nom du fichier à créer.
 * @text_content: Texte à écrire dans le fichier (NULL = fichier vide).
 *
 * Return: 1 si succès, -1 si échec.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		written = write(fd, text_content, len);
		if (written == -1 || (size_t)written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
