#include "lists.h"

/**
 * add_nodeint - Will be adding a new node at the beginning of the list
 * @n: The data to be inserted in that new node
 * @head: The pointer to the first node in the list
 * Return: The new node pointer , or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *mlindo;
mlindo = malloc(sizeof(listint_t));
if (!mlindo)
return (NULL);
mlindo->n = n;
mlindo->next = *head;
*head = mlindo;
return (mlindo);
}
