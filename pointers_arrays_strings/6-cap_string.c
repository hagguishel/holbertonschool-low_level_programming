#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
int j;
int i = 0;
int capitalize_next = 1;
char separators[] = " \t\n,;.!?\"(){}";
while (str[i] != '\0')
{
if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A');
}
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i] == separators[j])
{
capitalize_next = 1;
break;
}
else
{
capitalize_next = 0;
}
}
i++;
}
return (str);
}
