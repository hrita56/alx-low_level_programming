#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: linked list
 * @str: string to be added on the node
 * Return: new list or NULL otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *m;
	int length = 0;

	m = malloc(sizeof(list_t));
	if (m == NULL)
		return (NULL);

	while (str[length])
		length++;

	m->len = length;
	m->str = strdup(str);
	m->next = *head;
	*head = m;
	return (m);
}
