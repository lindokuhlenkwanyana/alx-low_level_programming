#include "lists.h"

/**
 * print_listint - will be printing all the elements of the linked list
 * @h: The linked list of type listint_t to print
 * Return: The amount number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t lindo = 0;
while (h)
{
printf("%d\n", h->n);
lindo++;
h = h->next;
}
return (lindo);
}
