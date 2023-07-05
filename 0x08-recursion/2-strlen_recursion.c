#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: a string that will  measured.
 * Return: length of measured string.
 */

int _strlen_recursion(char *s)

{
int Recurse = 0;
if (*s)
{
Recurse++;
Recurse += _strlen_recursion(s + 1);
}
return (Recurse);
}
