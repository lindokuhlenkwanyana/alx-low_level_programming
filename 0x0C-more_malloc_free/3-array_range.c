#include <stdlib.h>
#include "main.h"

/**
 * *array_range - will be creating an array of integers
 * @min: the minimum range of values stored
 * @max: the maximum range of values stored and number of elements
 * Return: new array
 */
int *array_range(int min, int max)
{
int *ptr;
int lindo;
if (min >= max)
return (NULL);
ptr = (int *) malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
return (NULL);
for (lindo = min; lindo < max; lindo++)
ptr[lindo] = lindo;
return (ptr);
}
