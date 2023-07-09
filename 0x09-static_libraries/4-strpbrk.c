#include "main.h"
/**
 * _strpbrk - Point of etry
 * @s: an input
 * @accept: an input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
int hello;
while (*s)
{
for (hello = 0; accept[hello]; hello++)
{
if (*s == accept[hello])
return (s);
}
s++;
}
return ('\0');
}

