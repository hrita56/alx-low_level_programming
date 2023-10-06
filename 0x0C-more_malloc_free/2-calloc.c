#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function tha alloctaes memory for any array using calloc
 * @nmemb: no of array
 * @size: array size
 * Return: new allocetd memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
