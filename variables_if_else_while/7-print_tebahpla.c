#include <stdio.h>
/**
* main - prints the alphabet in reverse order
*
* Description: This program prints all the letters of
* the alphabet in descending order, from 'z' to 'a'.
*
* Return: 0 if the program runs successfully
*/
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
