#include "main.h"

/**
 * get_endianness - checking if the machine is little
 * or big endian
 * Return: 0 or 1
 */
int get_endianness(void)
{
unsigned int hey = 1;
char *llondi = (char *) &hey;
return (*llondi);
}
