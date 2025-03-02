#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: pointer to one string.
 *
 * Return: value of string
 */

char *cap_string(char *str)
{
	int i  = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}' ||
		str[i] == '\n' ||
		str[i] == '\t')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
