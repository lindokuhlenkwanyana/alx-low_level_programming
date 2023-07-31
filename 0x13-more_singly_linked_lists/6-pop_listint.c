#include "lists.h"

/**
 * pop_listint - will be deleting the head node of a linked list
 * @head: The pointer to the first element in the linked list
 * Return: data deleted,or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
int mlindo;
listint_t *hello;

if (!head || !*head)
return (0);
mlindo = (*head)->n;
hello = (*head)->next;
free(*head);
*head = hello;
return (mlindo);
}
