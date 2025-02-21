#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 *
 * Description: Prints the multiplication table for numbers 0-9,
 * formatted with commas and spaces.
 */
void times_table(void)
{
	int x, y, a;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			a = x * y;

			if (a < 10)
			{
				_putchar((a % 10) + '0');
				if (y < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				if (y < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	_putchar('\n');
	}
}

