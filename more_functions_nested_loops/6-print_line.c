#include "main.h"
/**
 * print_line - Dessine une ligne avec '_'
 * @n: Nombre de '_'
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	 _putchar('\n');
}
