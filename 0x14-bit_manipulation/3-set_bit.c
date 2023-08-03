#include "main.h"

/**
 * set_bit - will set a bit at a given index to
 * 1
 * @index: the index of the bit to set to
 * @n: pointer to the number to change
 * 1
 * Return: 1,or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
