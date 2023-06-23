#include "main.h"

/**
 * print_line - print a straight line
 * 0n: is the number of times the _ character should be printed
 */

void print_line(int n)
{
int nUm;
if (n <= 0)
_putchar('\n');
else
{
for (nUm = 1; nUm <= n; nUm++)
_putchar('_');
_putchar('\n');
}
}
