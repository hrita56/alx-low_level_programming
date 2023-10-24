#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of alinked list
 * @head: first node in the linked list
 * Return: return sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t = head;

	while (t)
	{
		sum += t->n;
		t = t->next;
	}

	return (sum);
}
