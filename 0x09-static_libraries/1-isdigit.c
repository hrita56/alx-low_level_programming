#include "main.h"
/**
 * _isdigit - function to checker digit through
 * @c: parameter c
 * Return: 1 when success 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
