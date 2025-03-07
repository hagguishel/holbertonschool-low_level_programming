#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: the count of command-line arguments
 * @argv: array of strings containing the command-line arguments
 *
 * Description: This program takes multiple arguments representing positive
 * integers, adds them together, and prints the result, followed by a new line.
 * If no numbers are passed to the program, it prints 0. If any argument
 * contains a non-digit symbol, it prints "Error" and returns 1.
 *
 * Return: 0 if successful, 1 if any argument contains non-digit symbols
 */

int main(int argc, char *argv[])
{
	int i = 1, j = 0, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);
	return (0);
}
