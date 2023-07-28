#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - creates a new node at the start of a linked list
 * @head: listing_t list double pointe
 * @str: adding a new string to the node
 * Return: the new element's address, or NULL if it doesn't work
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int lindo = 0;
while (str[lindo])
lindo++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = lindo;
new->next = (*head);
(*head) = new;
return (*head);
}
