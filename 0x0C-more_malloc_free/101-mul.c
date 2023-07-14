#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - will reallocates a memory block using malloc and free
 * @ptr: will pointer to the memory previsouly allocated by malloc
 * @old_size: the size of the allocated memory for ptr
 * @new_size: anew size of the new memory block
 * Return: pointer to memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	char *old_lindo;
	unsigned int lindo;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
ptr2 = malloc(new_size);
if (!ptr2)
return (NULL);
old_lindo = ptr;
if (new_size < old_size)
{
for (lindo = 0; lindo < new_size; lindo++)
ptr2[lindo] = old_lindo[lindo];
}
if (new_size > old_size)
{
for (lindo = 0; lindo < old_size; lindo++)
ptr2[lindo] = old_lindo[lindo];
}
free(ptr);
return (ptr2);
}
