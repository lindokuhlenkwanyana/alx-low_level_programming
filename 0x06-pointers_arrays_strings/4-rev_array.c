#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int mi;
int si;

for (mi = 0; mi < n--; mi++)
{
si = a[mi];
a[mi] = a[n];
a[n] = si;
}
}
