#include <stdio.h>

/**
 * main - Affiche tous les arguments reçus par le programme
 * @argc: Le nombre d'arguments passés au programme
 * @argv: Un tableau contenant les arguments sous forme de chaînes de caractère
 * Return: Toujours 0 (indique que le programme s'est terminé correctement)
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
