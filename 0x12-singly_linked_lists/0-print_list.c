#include <stdio.h>
#include "lists.h"

/**
 * print_list - a linked list's whole elements are printed
 * @h: list_t list pointer for printing
 * Return: 0
 */
size_t print_list(const list_t *h)
{
while (h)
{
printf("[%u] %s\n", h->len, h->str);
h = h->next;
}
return (0);
}
