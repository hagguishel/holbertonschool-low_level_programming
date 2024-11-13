#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - Crée un tablea
 * @size: la taille du tableau à crée
 * @c: le caractère à utiliser pour initialiser le table
 * Return: un pointeur vers le tableau, ou NULL si l'allocation échou
 * ou si size est 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
