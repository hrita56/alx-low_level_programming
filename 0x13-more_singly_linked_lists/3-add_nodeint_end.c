#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: first node pointer
 * @n: inserted data in new node
 * Return: pointer to the new node, NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *t = *head;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
		return (w);
	}
	while (t->next)
		t = t->next;

	t->next = w;

	return (w);
}
