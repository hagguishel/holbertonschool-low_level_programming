 #include "main.h"
/**
 * print_diagonal - Dessine une ligne diagonale sur le terminal
 * @n: Nombre de fois que le caractère '\' doit être affiché
 *
 * Description: La fonction affiche une ligne diagonale avec le caractère
 * '\' `n` fois, chaque ligne suivante décalée d'un espace.
 * Si `n` est ≤ 0, seule une nouvelle ligne est affichée.
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
