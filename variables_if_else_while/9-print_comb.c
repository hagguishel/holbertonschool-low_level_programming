#include <stdio.h>
/**
 * main - Prints a programming quote
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
		if (i < 9)
		{
			printf(", ");
		}
		else
		{
			printf("$");
		}
	}
	return (0);
}
