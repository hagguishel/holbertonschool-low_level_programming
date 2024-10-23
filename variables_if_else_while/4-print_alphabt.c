#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: This function prints the alphabet in lowercase
* using the putchar function.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
putchar('\n');
return (0);
}
