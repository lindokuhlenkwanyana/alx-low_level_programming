#include <stdio.h>
#include <math.h>

/**
 * main - Printing the largest prime factor of the number 612852475143
 * Return: 0
 */

int main(void)

{
long x, maxb;
long number = 612852475143;
double square = sqrt(number);

for (x = 1; x <= square; x++)
{
if (number % x == 0)
{
maxb = number / x;
}
}
printf("%ld\n", maxb);
return (0);
}
