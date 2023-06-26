#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)

{
int prin, d, n, len, f, string;
prin = 0;
d = 0;
n = 0;
len = 0;
f = 0;
string = 0;
while (s[len] != '\0')
len++;
while (prin < len && f == 0)
{
if (s[prin] == '-')
++d;
if (s[prin] >= '0' && s[prin] <= '9')
{
string = s[prin] - '0';
if (d % 2)
string = -string;
n = n * 10 + string;
f = 1;
if (s[prin + 1] < '0' || s[prin + 1] > '9')
break;
f = 0;
}
prin++;
}
if (f == 0)
return (0);
return (n);
}
