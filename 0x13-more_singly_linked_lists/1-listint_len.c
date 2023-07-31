#include "lists.h"

/**
 * listint_len - Will be returning the number of elements in the linked lists
 * @h: the linked list of type listint_t to traverse
 * Return: The amount number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t mlindo = 0;
while (h)
{
mlindo++;
h = h->next;
}
return (mlindo);
}
