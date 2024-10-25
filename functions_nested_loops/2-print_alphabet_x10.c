#include "main.h"

void print_alphabet_x10(void)
{
int ALP;
int A;
for (A = '0'; A <= '9'; A++)
{
for (ALP = 'a'; ALP <= 'z'; ALP++)
{
_putchar(ALP);
}
_putchar('\n');
}
}
