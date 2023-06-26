#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)

{
int prin;
for (prin = 0; prin < (n - 1); prin++)
{
printf("%d, ", a[prin]);
}
if (prin == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
