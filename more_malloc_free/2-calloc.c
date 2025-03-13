#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *chem;
	if (nmemb == 0 || size == 0)
	return (NULL);

	chem = malloc(size *nmemb);
	if (!chem)
	return (NULL);

	for (i = 0; i < nmemb; i++)
	;

	return (chem);
}