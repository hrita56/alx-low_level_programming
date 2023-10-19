#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *  * add_node_end - function that adds a new node at the end of a list_t list
 *   * @head: linked list
 *   @str: string to store in  the list
 *   Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *b;
	size_t x;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	a->str = strdup(str);

	for (x = 0 ; str[x] ; x++)
		;

	a->len = x;
	a->next = NULL;
	b = *head;

	if (a == NULL)
	{
		*head = a;
	}
	else
	{
		while (a->next != NULL)
			b = b->next;
		b->next = a;
	}
	return (*head);
}
