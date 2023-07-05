#include "main.h"

/**
 * _print_rev_recursion - Printing a reverse string
 * @s: the string that will be printed
 * Return: 0
 */

void _print_rev_recursion(char *s)

{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
