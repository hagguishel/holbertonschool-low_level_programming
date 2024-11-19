#include <stdio.h>
/**
 * array_iterator - Exécute une fonction donnée sur chaque élément d'un tablea
 * @array: Pointeur vers le tableau d'entiers.
 * @size: Taille du tableau.
 * @action: Pointeur vers une fonction qui s'applique sur chaque élémen
 * Return: Rien.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
