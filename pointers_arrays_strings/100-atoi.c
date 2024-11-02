#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int has_number_started = 0;
while (s[i] != '\0')
{
if (s[i] == '-' && !has_number_started)
{
sign *= -1;
}
else if (s[i] == '+' && !has_number_started)
{
}
else if (s[i] >= '0' && s[i] <= '9')
{
has_number_started = 1;
result = result * 10 + (s[i] - '0');
if (sign == 1 && result < 0)
return __INT_MAX__;
if (sign == -1 && result > 0 && result * sign > 0)
return __INT_MIN__;
}
else if (has_number_started)
{
break;
}
i++;
}
return result * sign;
}

