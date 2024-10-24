#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Function: main
 * --------------
 * Description: Programme principal qui imprime les chiffres de 0 Ã 9
 * sur une seule ligne avec un saut de ligne Ã  la fin
 * Parameters: void
 * Returns: 0 on success
 */
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
printf("%d\n²", digit);
}
return (0);
}
