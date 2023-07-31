#include "lists.h"

/**
 * free_listint2 - it frees a linked list
 * @head: Thepointer to the listint_t list that is to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *hello;
if (head == NULL)
return;
while (*head)
{
hello = (*head)->next;
free(*head);
*head = hello;
}
*head = NULL;
}
