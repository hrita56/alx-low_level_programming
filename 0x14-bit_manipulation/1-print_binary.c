#include "main.h"

/**
 * _pow - function that calculate base power
 * @base: base
 * @power: exponent
 * Return:  Return value of base ^ power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned int x;
	unsigned long int y;

	y = 1;
	for (x = 1; x <= power; x++)
		y *= base;
	return (y);
}

/**
 * print_binary - function that prints the binary representation of a numbe
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, c;
	char f;

	f = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		c = n & d;
		if (c == d)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}

