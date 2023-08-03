#include "main.h"
#include <unistd.h>
/**
 * _putchar - will be writing the character c to stdout
 * @c: character to print
 * Return: will be 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
