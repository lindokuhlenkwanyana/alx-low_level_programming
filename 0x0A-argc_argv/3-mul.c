#include <stdio.h>
#include "main.h"

/**
 * _atoi - will be converting a string to an integer
 * @s: the string that will be converted
 * Return: int converted from the string
 */
int _atoi(char *s)
{
int hey, made, nope, len, f, code;
hey = 0;
made = 0;
nope = 0;
len = 0;
f = 0;
code = 0;
while (s[len] != '\0')
len++;
while (hey < len && f == 0)
{
if (s[hey] == '-')
++made;
if (s[hey] >= '0' && s[hey] <= '9')
{
code = s[hey] - '0';
if (made % 2)
code = -code;
nope = nope * 10 + code;
f = 1;
if (s[hey + 1] < '0' || s[hey + 1] > '9')
break;
f = 0;
}
hey++;
}
if (f == 0)
return (0);
return (nope);
}

/**
 * main - multiplying two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0, 1
 */
int main(int argc, char *argv[])
{
int result, num3, num1;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num3 = _atoi(argv[1]);
num1 = _atoi(argv[2]);
result = num3 *num1;
printf("%d\n", result);
return (0);
}
