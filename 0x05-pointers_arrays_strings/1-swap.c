#include <stdio.h>

/**
 * swap_int - swaping the values of 2 integers
 * @a: the first integer to be swapped
 * @b: the second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int Swap = *a;
*a = *b;
*b = Swap;
}
