#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - functon tha allocate memory using malloc
 * @b: size of memory
 * Return: new memory allocation
 */
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
