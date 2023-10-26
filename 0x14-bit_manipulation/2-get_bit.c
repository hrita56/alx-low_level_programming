#include"main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: no to check bits
 * @index: index to check bit
 * Return: bit value, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	c = n & d;
	if (c == d)
		return (1);
	return (0);
}

