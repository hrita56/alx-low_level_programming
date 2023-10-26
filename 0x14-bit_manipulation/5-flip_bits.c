#include "main.h"

/**
 * flip_bits - function that sets the value of a bit to 0 at a given index
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, cb = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		c = e >> x;
		if (c & 1)
			cb++;
	}

	return (cb);
}
