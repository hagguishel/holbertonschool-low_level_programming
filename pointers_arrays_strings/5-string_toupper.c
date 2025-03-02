#include "main.h"
/**
 * string_toupper - Convertit une chaîne en majuscules.
 * @str: La chaîne de caractères à convertir.
 *
 * Return: La chaîne convertie en majuscules.
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
