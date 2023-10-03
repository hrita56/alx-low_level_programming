#include "main.h"
/**
 * _isupper - function to xheck uppercase
 * @c: parameter c
 * Return: 1 when success 0 oterwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
