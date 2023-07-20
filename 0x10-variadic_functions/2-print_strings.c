#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  will be printing strings, followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 * @...: the variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list lindo;
char *hi;
unsigned int hello;
va_start(lindo, n);
for (hello = 0; hello < n; hello++)
{
hi = va_arg(lindo, char *);
if (hi == NULL)
printf("(nil)");
else
printf("%s", hi);
if (hello != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(lindo);
}
