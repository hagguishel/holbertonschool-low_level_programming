#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as an argument to the program
 *
 * Description: This function takes an operator in the form of a string
 * and returns a pointer to the corresponding function that performs
 * the operation. The operators supported are "+", "-", "*", "/", and "%".
 * If the operator does not match any of these, the function returns NULL.
 *
 * Return: A pointer to the corresponding function, or NULL if no match.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add},
		      {"-", op_sub},
		      {"*", op_mul},
		      {"/", op_div},
		      {"%", op_mod},
		      {NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
