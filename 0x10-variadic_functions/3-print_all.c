#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - printing anything
 * @format: list of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int lindo = 0;
char *str, *sep = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[lindo])
{
switch (format[lindo])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
lindo++;
continue;
}
sep = ", ";
lindo++;
}
}
printf("\n");
va_end(list);
}
