#include "main.h"
/**
 * swap_int - Échange les valeurs de deux entiers.
 * @a: Pointeur vers le premier entier.
 * @b: Pointeur vers le deuxième entier.
 *
 * Utilise une variable temporaire pour échanger les valeurs
 * pointées par a et b.
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
