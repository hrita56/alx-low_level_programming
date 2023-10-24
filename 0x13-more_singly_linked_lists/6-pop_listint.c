#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to thr firts node
 * Return: 0 is list is empty, or
 * data in the elements that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (x);
}
