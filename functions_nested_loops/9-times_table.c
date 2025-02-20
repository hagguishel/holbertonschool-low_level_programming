#include "main.h"

void times_table(void)
{
	int x;
	int y;
	int result;

	for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <=9 ; y++)
			{
				result = x * y;
				if (result < 10)
				{
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar((result / 10) + '0');
				}
			}
			_putchar('\n');
		}

}
