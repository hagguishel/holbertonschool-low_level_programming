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
/**
 * _strdup - Crée une copie de la chaîne `str`
 * @str: La chaîne à dupliquer
 *
 * Return: Un pointeur vers la copie ou NULL en cas d'échec
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	cpy = malloc(_strlen(str) + 1);
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i ++)
	{
		cpy[i] = str[i];

	}
	cpy[i] = '\0';

	return (cpy);
}
