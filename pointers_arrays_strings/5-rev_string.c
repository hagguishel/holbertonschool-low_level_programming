#include "main.h"

#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères à inverser.
 *
 * Cette fonction échange les caractères de la chaîne de manière
 * à inverser leur ordre.
 */
void rev_string(char *s)
{
int i, j;
char temp;
for (i = 0; s[i] != '\0'; i++)
;
for (j = 0; j < i / 2; j++)
{
temp = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = temp;
}
}
