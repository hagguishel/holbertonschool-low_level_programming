#include "main.h"

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value in the range
 * @max: The maximum value in the range
 *
 * Description: This function allocates memory to create an array
 * of integers that contains all values from `min` (inclusive) to
 * `max` (inclusive) in ascending order. If `min` is greater than
 * `max`, or if memory allocation fails, the function returns NULL.
 *
 * Return: A pointer to the newly created array, or NULL if
 * `min` > `max` or if allocation fails.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		array[i] = min + i;

	return (array);
}