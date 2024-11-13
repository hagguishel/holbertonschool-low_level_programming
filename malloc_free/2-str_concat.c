#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes de caractè
 * @s1: Première chaî
 * @s2: Deuxième chaî
 * Return: Un pointeur, ou NULL en cas d'erre
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0, i;
	char *result;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[length1] != '\0')
	{
	length1++;
	}
	while (s2[length2] != '\0')
	{
	length2++;
	}
	result = (char *)malloc(length1 + length2 + 1);
	if (result == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
	result[length1 + i] = s2[i];
	}
	result[length1 + length2] = '\0';
	return (result);
}
