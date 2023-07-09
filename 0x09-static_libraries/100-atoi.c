#include "main.h"

/**
 * _atoi - will be converting a string into an integer.
 * @s: the string to use.
 * Return: integer.
 */

int _atoi(char *s)
{
int sign = 1, hey = 0;
unsigned int res = 0;

while (!(s[hey] <= '9' && s[hey] >= '0') && s[hey] != '\0')
{
if (s[hey] == '-')
sign *= -1;
hey++;
}
while (s[hey] <= '9' && (s[hey] >= '0' && s[hey] != '\0'))
{
res = (res * 10) + (s[hey] - '0');
hey++;
}
res *= sign;
return (res);
}
