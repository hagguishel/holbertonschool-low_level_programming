#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;

	return (i);
}
char *str_concat(char *s1, char *s2)
{
	char *lien;
	unsigned int i, y;

	if (!s1)
	{
		s1 = ("");
	}
	if (!s2)
	{
		s2 = ("");
	}
	lien = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (!lien)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		lien[i] = s1[i];
	}
	for (y = 0; s2[y] != '\0'; y++, i++)
	{
		lien[i] = s2[y];
	}
	lien[i] = '\0';

	return (lien);
}