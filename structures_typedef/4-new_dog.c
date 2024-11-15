#include "dog.h"
#include <stdlib.h>

/**
 * _strlength - Calculates the length of a string
 * @s: Pointer to the string
 * Return: Length of the string (excluding null terminator)
 */
int _strlength(char *s)
{
int length = 0;
while (s && s[length] != '\0')
length++;
return (length);
}
/**
 * _strcopy - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to the destination buffer
 */
char *_strcopy(char *dest, char *src)
{
int i = 0;
while (src && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: Pointer to the new dog (dog_t), or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *name_copy, *owner_copy;
int name_len, owner_len;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
name_len = _strlength(name);
owner_len = _strlength(owner);
name_copy = malloc(name_len + 1);
if (name_copy == NULL)
{
free(dog);
return (NULL);
}
_strcopy(name_copy, name);
owner_copy = malloc(owner_len + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(dog);
return (NULL);
}
_strcopy(owner_copy, owner);
dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;
return (dog);
}
