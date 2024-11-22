#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format specifier.
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, print_sep = 0;
char *str;
va_start(args, format);
while (format && format[i])
{
if (print_sep)
printf(", ");
print_sep = 1;
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
break;
default:
print_sep = 0;
break;
}
i++;
}
va_end(args);
printf("\n");
}
