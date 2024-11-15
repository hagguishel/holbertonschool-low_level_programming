#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initialise une structure de type `dog`
 * @d: Pointeur vers la structure à initialiser
 * @name: Nom à assigner
 * @age: Âge à assigner
 * @owner: Propriétaire à assigner
 *
 * Description: Assure que le pointeur `d` n'est pas NULL avant
 *              d'assigner les valeurs.
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
