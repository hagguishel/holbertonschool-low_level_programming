#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to copy from s2.
 *
 * Return: A pointer to the newly allocated string, or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
if (n >= len2)
{
n = len2;
}
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
result[i] = s1[i];
}
for (j = 0; j < n; j++)
{
result[i + j] = s2[j];
}
result[i + j] = '\0';
return (result);
}
