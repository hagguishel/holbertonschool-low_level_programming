#include "main.h"

int is_prime_number(int n)
{
    if (n <= 1)
    {
        return (0);
    }
    if (n == 2)
    {
        return (1);
    }
    if (n % 2 == 0)
    {
        return (0);
    }
    return (check_prime(n, 3));
}

int check_prime(int n, int i)
{
    if (i  * i > n)
    {
        return (1);
    }
    if (n % i == 0)
    {
        return (0);
    }
    else 
    {
        return(check_prime(n, i + 2));
    }
}

