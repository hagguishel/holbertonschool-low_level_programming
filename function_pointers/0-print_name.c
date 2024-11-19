#include <stdio.h>
/**
 * print_name - Imprime un nom en utilisant une fonction donnée
 * @name: Pointeur vers le nom à imprime
 * @f: Pointeur vers une fonction qui imprime un nom
 * Return: Rien.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
