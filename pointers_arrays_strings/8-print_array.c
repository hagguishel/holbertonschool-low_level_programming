#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements, followed by a new line
 * @a: The array of integers
 * @n: The number of elements of the array to be printed
 * Description: This function prints the elements of the array separated
 * by commas and a space. The numbers are displayed in the same order
 * as they are stored in the array.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
