#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed
 *
 * Description: This function prints the second half of a string.
 * If the length of the string is odd, it starts printing from the
 * middle character, otherwise from the character after the half
 * of the string. It prints characters followed by a newline.
 */
void puts_half(char *str)
{
	int length = _strlen(str);

	if (length % 2 == 0)
	{
		int start = length / 2;

		while (str[start])
		{
			_putchar(str[start]);
			start++;
		}
	}
	else if (length % 2 != 0)
	{
		int n = ((length + 1) / 2);

			while (str[n])
			{
				_putchar(str[n]);
				n++;
			}
	}
	_putchar ('\n');
}
