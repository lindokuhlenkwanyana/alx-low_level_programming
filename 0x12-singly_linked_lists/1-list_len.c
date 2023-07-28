#include <stdlib.h>
#include "lists.h"

/**
 * list_len - brings back the size of a linked list's elements
 * @h: address of the list_t list
 * Return:the elements number in h
 */
size_t list_len(const list_t *h)
{
size_t numbers = 0;

while (h)
{
numbers++;
h = h->next;
}
return (numbers);
}
