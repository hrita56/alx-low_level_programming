#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: list of linked head
 * Return: ;
 */
void free_list(list_t *head)
{
	list_t *n;

	while ((n = head) != NULL)
	{
		head = head->next;
		free(n->str);
		free(n);
	}
}
