#include "main.h"
/**
 * free_grid - Libère une grille bidimensionnelle précédemme allouée par a
 * @grid: Le p vers la grille
 * @height: Le nomb de lignes dans la grile.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
