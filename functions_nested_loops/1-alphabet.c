#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
