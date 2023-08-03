#include "main.h"

/**
 * binary_to_uint - will be converting the binary number
 * to unsigned int
 * @b: the string that contains the binary number
 * Return: the number that is  converted
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int never = 0;
int lindo;

if (!b)
return (0);
for (lindo = 0; b[lindo]; lindo++)
{
if (b[lindo] < '0' || b[lindo] > '1')
return (0);
never = 2 * never + (b[lindo] - '0');
}
return (never);
}
