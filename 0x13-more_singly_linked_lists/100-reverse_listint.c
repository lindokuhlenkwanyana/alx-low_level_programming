#include "lists.h"

/**
 * reverse_listint - Will reverse a linked list
 * @head: The pointer to the first node
 * Return: The pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{

listint_t *hello = NULL;
listint_t *hi = NULL;

while (*head)
{
hello = (*head)->next;
(*head)->next = hi;
hi = *head;
*head = hello;
}
*head = hi;
return (*head);
}
