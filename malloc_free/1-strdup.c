#include "main.h"
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
	cpy = malloc(strlen(str) + 1);
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
