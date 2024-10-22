#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;  // Déclaration de la variable

	// Ligne vide après la déclaration
	srand(time(0));  // Initialisation du générateur de nombres aléatoires
	n = rand() - RAND_MAX / 2;

	// Indentation cohérente de 4 espaces
	if (n > 0)
	{
		printf("%d est positif\n", n);
	}
	else if (n == 0)
	{
		printf("%d est nul\n", n);
	}
	else
	{
		printf("%d est négatif\n", n)
	}
	return (0);
}
