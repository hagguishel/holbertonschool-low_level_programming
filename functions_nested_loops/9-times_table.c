#include "main.h"
#include <stdio.h>
/**
* times_table - Affiche l'alphabet en lettres minuscules dix fois
*
*
*/
void times_table(void)
{
	int a;
	int b;
	int result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				_putchar(' ');
			}
			if (result > 9)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			_putchar(result + '0');
		}
		_putchar('\n');
	}
}
