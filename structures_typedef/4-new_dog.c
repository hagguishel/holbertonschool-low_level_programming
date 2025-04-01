#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - Copies a string from src to dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog with a copy of name and owner
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (dog_t), or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	if (name == NULL || owner == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->name = malloc(_strlen(name) + 1);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	_strcpy(doggo->name, name);

	doggo->owner = malloc(_strlen(owner) + 1);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	_strcpy(doggo->owner, owner);

	doggo->age = age;

	return (doggo);
}
