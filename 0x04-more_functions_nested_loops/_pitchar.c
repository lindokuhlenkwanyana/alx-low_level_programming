#include <stdio.h>

/**
 * _putchar - writes the character c to stdio
 * @c: The character to print 
 * Return: 0
 * on error, -1 is returned, and error is set appropriately
 */

int _putchar(char c)
{
return(write(1, &c, 1));
}
