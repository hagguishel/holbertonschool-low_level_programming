#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string giparameter
 * @str: The string to be duplicate
 * Return: A pointer to the duplicated string, or NULL if insufficient memory
 * is available
 */
char *_strdup(char *str)
{
unsigned int len = 0;
unsigned int i;
char *dup;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
{
len++;
}
dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);
for (i = 0; i < len; i++)
{
dup[i] = str[i];
}
dup[len] = '\0';
return (dup);
}
