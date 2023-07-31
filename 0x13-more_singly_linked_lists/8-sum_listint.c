#include "lists.h"

/**
 * sum_listint - Will be calculating the sum of all the data
 * @head: The first linked list node
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
listint_t *hello = head;
int lindo = 0;
while (hello)
{
lindo += hello->n;
hello = hello->next;
}
return (lindo);
}
