#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: name to be printed
 * @f: pointer to a function that takes a string and prints it
 *
 * Description: This function calls the function pointed to by `f`
 * and passes the name as an argument. It handles NULL inputs by
 * doing nothing.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
