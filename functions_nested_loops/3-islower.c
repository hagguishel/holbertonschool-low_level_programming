#include "main.h"

/**
*_islower-Checks if a character is lowercase.
*@c:Character to check
*Return:1 if the character is lowercase, 0 otherwise.
*/
int _islower(int c)
{
if (c >= 'a')
{
if (c <= 'z')
{
return (1);
}
}
return (0);
}
