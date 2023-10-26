#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - function that sets the value of a bit to 1 at a given index
 * @n: parameter
 * @index: index
 * Return: return 1 success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

