#include "lists.h"

/**
 * free_listint - the free_listint that frees a linked list
 * @head: The listint_t list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *mlindo;
while (head)
{
mlindo = head->next;
free(head);
head = mlindo;
}
}
