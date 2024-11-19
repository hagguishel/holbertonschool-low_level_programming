#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Sélectionne la fonction appropriée pour effectuer
 *               l'opération demandée par l'utilisateur.
 * @s: L'opérateur fourni par l'utilisateur.
 *
 * Return: Un pointeur vers la fonction correspondante
 *         ou NULL si l'opérateur n'est pas valide.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
		return (ops[i].f);
		i++;
	}
	return (NULL);
}
