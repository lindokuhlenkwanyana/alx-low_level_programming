#include <unistd.h>

/**
 * _putchar - will be writing the characters c to stdout
 * @c: character that is to be printed
 * Return: will be 1.
 * if there is an error, -1 will be returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
