#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}
/**
 * string_nconcat - Concatenates two strings up to n characters of the second.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of characters to concatenate from s2.
 *
 * Return: Pointer to the newly allocated space containing the concatenated string,
 *         or NULL if allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int i, j;
	unsigned int len_s2;

	if (!s1)
	s1 = "";

	if (!s2)
	s2 = "";

	if (n < _strlen(s2))
	len_s2 = n;
	else
	len_s2 = _strlen(s2);

	mem = malloc(_strlen(s1) + len_s2 + 1);
	if (!mem)
	return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	mem[i] = s1[i];
	for (j = 0; j < len_s2 && s2[j] != '\0'; j++, i++)
	mem[i] = s2[j];

	mem[i] = '\0';

	return (mem);
}
