#include "dog.h"
/**
 * init_dog - Initializes a dog struct
 * @d: Pointer to dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}

}
