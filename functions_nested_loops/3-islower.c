#include "main.h"

/*
 * _islower - Checks if a character is a lowercase letter.
 * @c: The character to check.
 *
 * Returns 1 if the character is a lowercase letter ('a' to 'z'),
 * otherwise returns 0.
 *
 * Note: The call to _putchar is unnecessary in this function and
 * does not contribute to its logic.
 */
int _islower(int c)
{
int lower;
	for (lower = 'a'; lower <= 'z'; lower++)
	{
	if (lower == c)
	return (1);
	}
_putchar (lower);
