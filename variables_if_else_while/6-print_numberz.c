#include <stdio.h>
/**Function: add_numbers
*Description: Cette fonction additionne deux entiers et retourne la somme. 
*Returns:
*La somme de a et b en tant qu'entier.
*/
int main(void)
{
char add_numbers;
for (add_numbers = 0; add_numbers <= 9; add_numbers++)
{
putchar(add_numbers +'0');
putchar('\n');
}
return (0);
}
