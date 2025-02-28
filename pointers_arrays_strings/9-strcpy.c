#include "main.h"
#include <string.h>
/**
 * _strcpy - Copies a string from src to dest
 * @dest: Destination buffer
 * @src: Source string
 *
 * Description: This function copies the string pointed to by src,
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	;
	strcpy(dest, src);
	return (dest);
}
