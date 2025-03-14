#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * This function prints the details of a struct dog, including its
 * name, age, and owner. If any element of the struct is NULL,
 * it prints (nil) instead of the value for that element. If the
 * pointer to struct dog is NULL, the function does not print
 * anything.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	d->name
	    ? printf("Name: %s\n", d->name)
	    : printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);

	d->owner
	    ? printf("Owner: %s\n", d->owner)
	    : printf("Owner: (nil)\n");
}
