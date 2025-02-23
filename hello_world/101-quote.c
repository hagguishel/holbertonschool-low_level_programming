#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints - Dora Korpar, 2015-10-19"
 *              to the standard error output.
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

