#include "main.h"
/**
 * _atoi - will be converting a string into an integer.
 * @s: string to use.
 * Return: integer.
 */
int _atoi(char *s)
{
int sign = 1, hello = 0;
unsigned int res = 0;

while (!(s[hello] <= '9' && s[hello] >= '0') && s[hello] != '\0')
{
if (s[hello] == '-')
sign *= -1;
hello++;
}
while (s[hello] <= '9' && (s[hello] >= '0' && s[hello] != '\0'))
{
res = (res * 10) + (s[hello] - '0');
hello++;
}
res *= sign;
return (res);
}
