#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that compares two strings and should work exactly like
 *@s1: first strings to be compared
 *@s2: second strings to be compared
 *
 * Return: integers
*/

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}

	if (s1[i] == '\0' && s2[i] == '\0')
	{
		j = 0;
	}

	else
	{
		j = s1[i] - s2[i];
	}
	return (j);
}
