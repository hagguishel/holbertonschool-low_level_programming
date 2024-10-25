#include <stdio.h>
int main(void)
{
char C;
for (C = 'z'; C >= 'a'; C--)
{
putchar (C);
}
putchar ('\n');
return 0;
}
