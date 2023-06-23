#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: is the number of times the \ character shoould be printed
 */

void print_diagonal(int n)
{
int lIne, diaGonaln;
if (n <= 0)
_putchar('\n');
else
{
for (lIne = 1; lIne <= n; lIne++)
{
for (diaGonaln = 1; diaGonaln <= lIne; diaGonaln++)
_putchar(' ');
_putchar(92); /* is equal to '/' char*/
_putchar('\n');
}
}
}
