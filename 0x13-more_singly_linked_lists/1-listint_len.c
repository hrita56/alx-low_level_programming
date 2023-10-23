#include "lists.h"
/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: linked list
 * Return: it will return number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
