#include "main.h"
/**
 * _strncat - Concatenate at most n bytes from src to dest.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to concatenate.
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
		dest++;

	while (n > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (ptr);
}
