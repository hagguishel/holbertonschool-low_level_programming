#include <stdio.h>

/**
 * main - Affiche tous les arguments reçus par le programme
 * @argc: Le nombre d'arguments passés au programm
 * @argv: Un tableau contenant les arguments sous forme de chaînes de caractè
 * Return: Toujours 0
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
