#include "main.h"

/*
 * _islower - Checks if a character is a lowercase letter.
 * @c: The character to check.
 *
 * This function returns 1 if the character is a lowercase letter 
 * (between 'a' and 'z'), and 0 otherwise.
 *
 * Note: The call to _putchar is unnecessary in this function and 
 * does not contribute to its functionality.
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
