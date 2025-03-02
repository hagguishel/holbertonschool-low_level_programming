#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Inverse un tableau d'entiers.
 * @a: Tableau à inverser
 * @n: Taille du tableau.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	i++;
	j--;
	}
}
