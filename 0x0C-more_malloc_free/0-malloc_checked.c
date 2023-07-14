#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - will be allocating memory using malloc
 * @b: the number of bytes to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *abc;
abc = malloc(b);
if (abc == NULL)
exit(98);
return (abc);
}
