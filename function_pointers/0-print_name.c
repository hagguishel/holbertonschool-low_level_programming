#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: The function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{

	if (!f)
	{
		return;
	}

	if (!name)
	{
		return;
	}

	f(name);
}
