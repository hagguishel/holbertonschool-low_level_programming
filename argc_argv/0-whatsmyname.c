#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Return: number of arguments
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}