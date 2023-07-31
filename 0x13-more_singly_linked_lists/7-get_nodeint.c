#include "lists.h"

/**
 * get_nodeint_at_index - will be returning the node index in the linked list
 * @index: the index of the node to be returned
 * @head: first node in the linked lis
 * Return: the poiunter, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int hello = 0;
listint_t *nope = head;
while (nope && hello < index)
{
nope = nope->next;
hello++;
}
return (nope ? nope : NULL);
}
