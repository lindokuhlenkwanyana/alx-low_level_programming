#include "lists.h"

/**
 * delete_nodeint_at_index - Will be deleting the node in the
 * linked list at a certain index
 * @index: The index of the node to be  deleted
 * @head: The pointer to the first element.
 * Return: 1, or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *hello = *head;
unsigned int lindo = 0;
listint_t *how = NULL;


if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(hello);
return (1);
}
while (lindo < index - 1)
{
if (!hello || !(hello->next))
return (-1);
hello = hello->next;
lindo++;
}
how = hello->next;
hello->next = how->next;
free(how);
return (1);
}
