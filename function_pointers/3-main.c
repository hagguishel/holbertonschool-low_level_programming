#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Point d'entrée du programm
 * @argc: Nombre d'arguments
 * @argv: Tableau d'arguments
 * Return: 0 si succès, ou un code d'erreur
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
