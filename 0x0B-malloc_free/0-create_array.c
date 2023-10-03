#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initialize it
 * @size: size of array
 * @c: char to asign
 * Return: 0 if size 0, NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		str[i] = c;
	return (str);
}
