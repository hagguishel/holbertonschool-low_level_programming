#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n",argv[i]);
	return (0);
}