#include "main.h"

/**
 * _puts_recursion - function puts();
 * @s: input
 * Return: 0
 */

void _puts_recursion(char *s)

{

if (*s)
{
_puts_recursion(s + 1);
_putchar(*s);
}
else
_putchar('\n');
}
