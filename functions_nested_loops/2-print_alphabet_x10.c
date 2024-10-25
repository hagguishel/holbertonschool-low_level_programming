#include "main.h"
/**
 * print_alphabet_x10 - alphabet 10
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int alphabet10;
int a;
for (a = 1; a <= 10; a++)
{
for (alphabet10 = 'a'; alphabet10 <= 'z' ; alphabet10++)
{
_putchar(alphabet10);
}
_putchar('\n');
}
}
