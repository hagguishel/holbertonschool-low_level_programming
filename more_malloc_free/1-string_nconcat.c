#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings up to n bytes from s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes to concatenate from s2.
 *
 * Return: Pointer to the concatenated string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lg1 = 0, lg2 = 0, i, j;
	char *resultat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lg1])
		lg1++;

	while (s2[lg2])
		lg2++;

	if (n > lg2)
		n = lg2;

	resultat = malloc((lg1 + n + 1) * sizeof(char));
	if (resultat == NULL)
		return (NULL);

	for (i = 0; i < lg1; i++)
		resultat[i] = s1[i];

	for (j = 0; j < n; j++)
		resultat[i + j] = s2[j];

	resultat[i + j] = '\0';

	return (resultat);
}
