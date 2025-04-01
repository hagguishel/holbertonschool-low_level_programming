#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Description: This program takes three arguments: two integers and an
 * operator. It performs the operation specified by the operator on the two
 * integers and prints the result. If the number of arguments is incorrect,
 * or if the operator is invalid, or if a division/modulo by zero is attempted,
 * it prints an error message and exits with a specific status code.
 *
 * Return: 0 on success, or exits with a status code on error:
 * - 98 if the number of arguments is incorrect
 * - 99 if the operator is invalid
 * - 100 if a division or modulo by zero is attempted
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operator(num1, num2);

	printf("%d\n", result);

	return (0);
}
