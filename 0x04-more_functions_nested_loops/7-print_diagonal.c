#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: is the number of times the \ character shoould be printed
 */

void print_diagonal(int n)
{
int lIne, diaGonal;
if (n <= 0)
_putchar('\n');
else
{
for (lIne = 1; lIne <= n; lIne++)
{
for (diaGonal = 1; diaGonal <= lIne; diaGonal++)
_putchar(' ');
_putchar(92); /* is equal to '/' char*/
_putchar('\n');
}
}
}
