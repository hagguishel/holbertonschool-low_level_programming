#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
// Calculate the last digit of n
last_digit = n % 10;
// If n is negative, make the last digit positive
if (last_digit < 0)
{
last_digit = -last_digit; // convert to positive
}
// Print the required output
printf("Last digit of %d is %d", n, last_digit);
if (last_digit > 5)
{
printf(" and is greater than 5\n");
}
else if (last_digit == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}
