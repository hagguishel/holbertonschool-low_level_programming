#include "main.h"
/**
 * read_textfile - Lit un fichier texte et l'affiche sur la sortie standard
 * @filename: nom du fichier à lire
 * @letters: nombre de lettres à lire et afficher
 *
 * Return: nombre réel de lettres lues et affichées, ou 0 si erreur
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	__ssize_t r, w;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters + 1);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w != r)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (r);
}
