#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if the program executes successfully
 */
int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
