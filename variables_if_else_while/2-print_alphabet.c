#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if the program executes successfully
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
