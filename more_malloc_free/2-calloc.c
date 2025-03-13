#include "main.h"
/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size (in bytes) of each element.
 *
 * Return: Pointer to allocated memory, or NULL if nmemb/size is 0 or malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *chem;

	if (nmemb == 0 || size == 0)
	return (NULL);

	chem = malloc(size *nmemb);
	if (!chem)
	return (NULL);

	for (i = 0; i < nmemb * size; i++)
	chem[i] = 0;

	return (chem);
}