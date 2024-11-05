#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Prints the chessboard.
 * @a: A pointer to an 8x8 array representing the chessboard.
 * Description: This function prints the chessboard to the standard output,
 * where each piece is represented by a character. The function iterates
 * through the 8x8 array and prints each character followed by a space.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n");
}
}
