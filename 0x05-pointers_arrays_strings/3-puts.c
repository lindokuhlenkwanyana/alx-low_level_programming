#include "main.h"

/**
 * _puts - printing a string
 * @str: the string to print
 * Return: 0
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str++);
}
_putchar('\n');
}
