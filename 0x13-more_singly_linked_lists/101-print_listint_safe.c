#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function that counts thenumber of unique nodes
 * @head: pointer to the head of linked list
 * Return: 0  when list is not looped,
 * or no of unique nodes in thelist
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t, *e;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	e = (head->next)->next;

	while (e)
	{
		if (t == e)
		{
			t = head;
			while (t != e)
			{
				nodes++;
				t = t->next;
				e = e->next;
			}

			t = t->next;
			while (t != e)
			{
				nodes++;
				t = t->next;
			}

			return (nodes);
		}

		t = t->next;
		e = (e->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t list.
 * @head: pointer to the head of linked list
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no, i = 0;

	no = looped_listint_len(head);

	if (no == 0)
	{
		for (; head != NULL; no++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < no; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (no);
}

