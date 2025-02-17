#include <stdio.h>
/**
 * main - Prints a programming quote
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low, strong;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (strong = 'A'; strong <= 'Z'; strong++)
	{
		putchar(strong);
	}
	putchar('\n');
	return (0);
}
