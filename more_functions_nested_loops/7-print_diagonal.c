 #include "main.h"
/**
 * print_diagonal - Dessine une ligne diagonale sur le terminal
 * @n: Nombre de fois que le caractère '\' doit être affic
 * Description: La fonction affiche une ligne diagonale en utilisant le caractèr
 * '\' `n` fois, avec chaque ligne suivante indéterminée d'un espace supplémentai
 * Si `n` est inférieur ou égal à 0, seule une nouvelle ligne est affich
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
