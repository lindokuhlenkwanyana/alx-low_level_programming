#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 * *_calloc - allocating the memory for an array
 * @nmemb: a number of elements in the array
 * @size: the size of each element
 * Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
memset(ptr, 0, nmemb * size);
return (ptr);
}
