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
int base;
for (base = 0; base < 10; base++)
{
putchar(base + '0');
}
putchar(' ');
putchar(',');
putchar('\n');
return (0);
}
