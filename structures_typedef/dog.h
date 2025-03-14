#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A simple structure to represent a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
