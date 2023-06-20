#include "maih.h"
#include <unistd.h>

/**
 *__putchar - writing the character c to stdiot
 * Return: 0
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
