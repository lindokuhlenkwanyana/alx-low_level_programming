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
int *abc;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
abc = malloc(sizeof(int) * size);
if (abc == NULL)
return (NULL);
for (i = 0; min <= max; i++)
abc[i] = min++;
return (abc);
}
