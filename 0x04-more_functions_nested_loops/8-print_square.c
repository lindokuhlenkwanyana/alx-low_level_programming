#include "main.h"

/**
 * print_square - print a square using the character
 * @size: is the size of the square
 * Return: 0
 */

void print_square(int size)

{
int row, corner;
for (row = 1; row <= size; row++)
{
for (corner = 1; corner <= size; corner++)
_putchar('#');
_putchar('\n');
}
}
