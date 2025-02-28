#include "main.h"
/**
 * _strcpy - Copie une chaîne de caractères
 * @dest: Destination
 * @src: Source
 *
 * Return: Pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	char *pvd = dest;

	while (*src)
	{
		*dest = *src;

		dest++;
		src++;
	}
	*dest = '\0';
	return (pvd);

}
