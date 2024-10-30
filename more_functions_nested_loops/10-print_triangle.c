#include "main.h"
/**
 * print_triangle - Prints a triangle of '#' characters.
 * @size: The size of the triangle.
 * Description: If size is 0 or less, the function only prints
 * a new line. Each row contains spaces and '#' characters to
 * form a right-aligned triangle.
 */
void print_triangle(int size)
{
int row, col, spaces;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
for (spaces = size - row; spaces > 0; spaces--)
_putchar(' ');
for (col = 0; col < row; col++)
_putchar('#');
_putchar('\n');
}
}
}
