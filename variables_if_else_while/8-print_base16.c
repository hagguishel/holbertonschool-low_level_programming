#include <stdio.h>
/*
 * Write a program that prints all the numbers of base 16
 * You can only use the putchar
 * All your code should be in the main function
 */
int main(void)
{
char A;
for (A = 0 ; A <= 9 ; A++)
putchar('A' + 0);
for (A = 'a' ; A <= 'f' ; A++)
putchar ('A');
putchar ('\n');
return (0);
}
