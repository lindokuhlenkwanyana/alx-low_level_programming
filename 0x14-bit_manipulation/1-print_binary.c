#include "main.h"

/**
 * print_binary - will be printing the binary equivalent of a decimal number
 * @n: the number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
int lindo, londeka = 0;
unsigned long int lubanzi;

for (lindo = 63; lindo >= 0; lindo--)
{
lubanzi	= n >> lindo;
if (lubanzi & 1)
{
_putchar('1');
londeka++;
}
else if (londeka)
_putchar('0');
}
if (!londeka)
_putchar('0');
}
