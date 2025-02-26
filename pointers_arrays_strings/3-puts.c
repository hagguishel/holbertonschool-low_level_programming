#include "main.h"
/**
 * _puts - Prints a string followed by a newline
 * @str: The string to be printed
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
