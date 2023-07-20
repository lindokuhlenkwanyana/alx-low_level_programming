#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - will be printing numbers, followed by a new line.
 * @separator: The string that will be printed between numbers.
 * @n: number of integers passed to the function.
 * @...: The variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list lindo;
unsigned int hello;
va_start(lindo, n);
for (hello = 0; hello < n; hello++)
{
printf("%d", va_arg(lindo, int));
if (hello != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(lindo);
}
