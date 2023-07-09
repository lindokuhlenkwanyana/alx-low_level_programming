#include "main.h"
/**
 * _strspn - Point of entry
 * @s: The input
 * @accept: The input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int hi = 0;
int hello;
while (*s)
{
for (hello = 0; accept[hello]; hello++)
{
if (*s == accept[hello])
{
hi++;
break;
}
else if (accept[hello + 1] == '\0')
return (hi);
}
s++;
}
return (hi);
}
