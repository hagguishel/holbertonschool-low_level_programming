#include "main.h"

int **alloc_grid(int width, int height)
{
	int i;
	int **grille;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grille = malloc(height * sizeof(int*));
	if (!grille)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grille[i] = malloc(width * sizeof(int));
		if (!grille[i])
		{
			return (NULL);
		}
	}
	return (grille);
}