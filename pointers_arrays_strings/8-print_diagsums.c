#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int n = 0;
	int s = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (n <= size * size)
	{
		sum1 = sum1 + a[n];
		n = n + size + 1;
	}

	while (s < size * size - 1)
	{
		sum2 = sum2 + a[s];
		s = s + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
