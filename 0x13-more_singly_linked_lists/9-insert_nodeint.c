#include "lists.h"

/**
 * insert_nodeint_at_index - Will be inserting
 * a new node in a linked list
 * @n: The data to be inserted in the new node
 * @idx: The index where the new node will be added
 * @head: The pointer to the first node in the list
 * Return: The pointer to new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *hello = *head;
listint_t *hey;
unsigned int lindo;

hey = malloc(sizeof(listint_t));
if (!hey || !head)
return (NULL);
hey->n = n;
hey->next = NULL;
if (idx == 0)
{
hey->next = *head;
*head = hey;
return (hey);
}
for (lindo = 0; hello && lindo < idx; lindo++)
{
if (lindo == idx - 1)
{
hey->next = hello->next;
hello->next = hey;
return (hey);
}
else
hello = hello->next;
}
return (NULL);
}
