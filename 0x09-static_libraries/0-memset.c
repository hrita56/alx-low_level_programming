#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: starting adress of memory tobe filles
 * @b: the desired value
 * @n: numer of bytes tobe changed
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
