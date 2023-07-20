#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - will returns the sum of all its paramters.
 * @n: number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list lindo;
unsigned int hello, sum = 0;
va_start(lindo, n);
for (hello = 0; hello < n; hello++)
sum += va_arg(lindo, int);
va_end(lindo);
return (sum);
}
