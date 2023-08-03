#include "main.h"

/**
 * flip_bits - counting the number of bits to change
 * @m: the second number
 * @n: the first number
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int lindo, londeka = 0;
unsigned long int say;
unsigned long int exclusive = n ^ m;

for (lindo = 63; lindo >= 0; lindo--)
{
say = exclusive >> lindo;
if (say & 1)
londeka++;
}
return (londeka);
}
