#include"main.h"

/**
* print_rev - imprime en reversa
* @s: string
* return: 0
*/

void print_rev(char *s)

{
int prin = 0;
int f;
while (*s != '\0')
{
prin++;
s++;
}
s--;
for (f = prin; f > 0; f--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
