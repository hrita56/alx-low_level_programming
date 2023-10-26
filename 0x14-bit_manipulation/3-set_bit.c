#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: no to set
 * @index: index at which to set bit
 * Return: return 1 iwhen success, 1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	s = 1 << index;
	*n = *n | s;
	return (1);
}

