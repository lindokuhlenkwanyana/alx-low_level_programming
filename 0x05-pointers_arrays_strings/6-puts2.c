#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
int prin = 0;
int a = 0;
char *y = str;
int x;
while (*y != '\0')
{
y++;
prin++;
}
a = prin - 1;
for (x = 0 ; x <= a ; x++)
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
}
_putchar('\n');
}
