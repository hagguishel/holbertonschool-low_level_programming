#include "main.h"
#include <stdio.h>

void puts2(char *str)
{
int i = 0;
for (i = 0; str[i] != '\0'; str++)
{
	printf("%c'\n'", str[i]);
}
}
