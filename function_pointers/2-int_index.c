#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Description: This function iterates over the array and uses
 * the comparison function `cmp` to find the first element that
 * satisfies a certain condition (determined by `cmp`).
 * If such an element is found, its index is returned.
 * If no match is found, or if `size` is less than or equal to 0,
 * the function returns -1. The function also handles NULL inputs
 * for `array` or `cmp` by returning -1.
 *
 * Return: Index of the first matching element, or -1 if no match
 * or invalid input.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
