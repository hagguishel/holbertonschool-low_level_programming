#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Crée une copie d'une chaîne de caractè
 * @str: La chaîne de caractères à dupliq
 * Return: un pointeur vers la copie de la chaîne, ou NULL en cas d'erreu
 */
char *_strdup(char *str)
{
	size_t length = strlen(str);
	size_t i;
	char *copy = (char *)malloc(length + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
	copy[i] = str[i];
	}
	copy[length] = '\0';
	return (copy);
}
