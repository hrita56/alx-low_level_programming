#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to first node
 * Return: the freed list number element
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ln = 0;
	int d;
	listint_t *t;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			ln++;
		}
		else
		{
			free(*h);
			*h = NULL;
			ln++;
			break;
		}
	}

	*h = NULL;

	return (ln);
}

