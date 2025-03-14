#include "dog.h"

/**
 * init_dog - Initialise une structure de type dog
 * @d: Pointeur vers la structure à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
