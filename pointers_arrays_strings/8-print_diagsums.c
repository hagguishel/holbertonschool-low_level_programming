#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 * @a: A pointer to the first element of the matrix.
 * @size: The size of the matrix (number of rows/columns).
 * Description: This function calculates the sums of the two diagonals
 * of a square matrix and prints the results. The first diagonal goes
 * from the top-left to the bottom-right, while the second diagonal
 * goes from the top-right to the bottom-left.
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum1, sum2);
}
