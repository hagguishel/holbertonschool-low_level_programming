#include "main.h"
/**
 * create_array - Crée un tableau de `size` caractères avec `c`
 * @size: Taille du tableau
 * @c: Caractère d'initialisation
 *
 * Return: Pointeur du tableau ou NULL
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	tab = malloc(size * sizeof(char));
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
}