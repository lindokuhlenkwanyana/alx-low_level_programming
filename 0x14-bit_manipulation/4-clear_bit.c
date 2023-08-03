#include "main.h"

/**
 * clear_bit - setting the value of a given bit to 0
 * @index: the index of the bit to clear
 * @n: the pointer to the number to change
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
