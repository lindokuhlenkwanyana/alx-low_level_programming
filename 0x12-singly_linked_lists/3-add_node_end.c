#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - at the end of a linked list, adds a new node
 * @str: to insert a string into the new node
 * @head: to the list_t list with a double pointer
 * Return: the new element's address, or NULL if it was unsuccessful
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int lindo = 0;
list_t *new;
list_t *temp = *head;

while (str[lindo])
lindo++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = lindo;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;
temp->next = new;
return (new);
}
