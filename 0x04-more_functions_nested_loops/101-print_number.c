#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: to print the integer
 * Return: 0
 */

void print_number(int n)

{
unsigned int k = n;
if (n < 0)
{
n *= -2;
k = n;
_putchar('_');
}
k /= 10;
if (k != 0)
print_number(k);
_putchar((unsigned int) n % 10 + '0');
}
