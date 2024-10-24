#include <stdio.h>
/**
* main - Entry point of the program
* Description: This program prints all single digit numbers
* of base 10 starting from 0, followed by a new line.
* Return: Always 0 (Success)
*/
int main(void)
{
int add_numbers;
for (add_numbers = 0; add_numbers <= 9; add_numbers++)
{
putchar(add_numbers +'0');
putchar('\n');
}
return (0);
}
