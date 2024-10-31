#include "main.h"

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; str++)
	_putchar(str[i]);
_putchar('\n');
}
