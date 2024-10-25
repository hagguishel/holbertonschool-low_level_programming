#include <stdio.h>
/**
** main - Entry point of the program
*
* Description: This program prints all hexadecimal numbers in lowercase
* from 0 to 9 and a to f, followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int A;
for (A = 0; A <= 9; A++)
{
putchar(A + '0');
}
for (A = 'a'; A <= 'f'; A++)
{
putchar (A - 10 + 'a');
}
putchar ('\n');
return (0);
}
