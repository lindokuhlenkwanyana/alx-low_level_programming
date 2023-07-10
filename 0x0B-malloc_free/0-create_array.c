#include "main.h"
#include <stdlib.h>
/**
 * create_array - creating an array of size size and assign char c
 * @size: size of the  array
 * @c: char to be assigned
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
char *hey;
unsigned int hello;

hey = malloc(sizeof(char) * size);
if (size == 0 || hey == NULL)
return (NULL);

for (hello = 0; hello < size; hello++)
hey[hello] = c;
return (hey);
}
