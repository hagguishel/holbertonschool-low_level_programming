#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Crée un tableau d'entiers de min à m
 * @min: La valeur minimale (incluse)
 * @max: La valeur maximale (incluse)
 * Return: Pointeur vers le tableau nouvellement créé, ou NULL si erre
 */
int *array_range(int min, int max)
{
	int i;
	int taille = max - min + 1;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(taille * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < taille; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
