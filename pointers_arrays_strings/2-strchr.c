#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (c == '\0')
		return (s + i);
	return (NULL);
}
