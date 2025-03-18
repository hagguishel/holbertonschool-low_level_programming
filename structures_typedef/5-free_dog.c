#include <stdlib.h>

#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees the memory allocated for the fields
 * `name` and `owner` of a `dog_t` structure, as well as the structure
 * itself. It ensures that all dynamic memory associated with the dog
 * structure is properly deallocated, preventing memory leaks.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
