#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - will be printing each array element
 * @array: an array
 * @size: how many elements to print
 * @action: the pointer to print in hex or regular
 * Return: will be empty
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int lindo;
if (array == NULL || action == NULL)
return;
for (lindo = 0; lindo < size; lindo++)
{
action(array[lindo]);
}
}
