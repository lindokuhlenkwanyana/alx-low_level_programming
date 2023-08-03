#include "main.h"

/**
 * get_bit - will be returning the value of a bit
 * at an index in a decimal number
 * @n: the number to be searched
 * @index: the index of the bit
 * Return: the value bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int lindo;
if (index > 63)
return (-1);
lindo = (n >> index) & 1;
return (lindo);
}
