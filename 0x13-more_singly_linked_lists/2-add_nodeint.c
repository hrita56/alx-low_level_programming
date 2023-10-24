#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * at the end of a listint_t list.
 * @head: first node pointer
 * @n: inserted data in new node
 * Return: pointer to the new node, NULL otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *w;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = *head;
	*head = w;

	return (w);
}
