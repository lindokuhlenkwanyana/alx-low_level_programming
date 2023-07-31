#include "lists.h"

/**
 * add_nodeint_end - Will be adding the  node at the end of a linked list
 * @n: The data to be inserted in the new element
 * @head: The pointer to  first element in the list
 * Return: The new node pointer, or NULL if doesn't succeed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *mlindo;
listint_t *lubanzi = *head;

mlindo = malloc(sizeof(listint_t));
if (!mlindo)
return (NULL);
mlindo->n = n;
mlindo->next = NULL;
if (*head == NULL)
{
*head = mlindo;
return (mlindo);
}
while (lubanzi->next)
lubanzi = lubanzi->next;
lubanzi->next = mlindo;
return (mlindo);
}
