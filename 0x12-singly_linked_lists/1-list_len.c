#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of
 * elements in a linked list_t list
 * @h: list that is linked
 * Return: number pf elements
 */

size_t list_len(const list_t *h)
{
size_t x = 0;

while (h)
{
h = h->next;
x++;
}
return (x);
}
