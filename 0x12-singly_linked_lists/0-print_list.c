#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - function to prints all the elements of a linked list
 * @h: pointer to list_t list
 * Return: the number of nodes to be printed in h
 */
size_t print_list(const list_t *b)
{
	size_t a = 0;

	while (b)
	{
		if (!b->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", b->len, b->str);
		b = b->next;
		a++;
	}
	return (a);
}
