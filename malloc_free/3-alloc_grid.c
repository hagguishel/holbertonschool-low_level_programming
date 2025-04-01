#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Alloue un tableau 2D de dimensions width x height.
 * @width: Nombre de colonnes.
 * @height: Nombre de lignes.
 *
 * Return: Pointeur vers le tableau 2D ou NULL si l'allocation échoue.
 */
int **alloc_grid(int width, int height)
{
	int i, y;
	int **grille;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grille = malloc(height * sizeof(int *));
	if (!grille)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grille[i] = malloc(width * sizeof(int));
		if (!grille[i])
		{
			for (y = 0; y < i; y++)
			{
				free(grille[y]);
			}
			free(grille);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			grille[i][y] = 0;
		}
	}
	return (grille);
}
