#include "main.h"

int _sqrt_helper(int n, int x);
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
int _sqrt_helper(int n, int x)
{
if (x * x == n)
return x;
if (x * x > n)
return -1;
return _sqrt_helper(n, x + 1);
}
