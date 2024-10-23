#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
for (digit = 0; digit <= 9; digit++)
{
printf("%d", digit);
}
return (0);
}
