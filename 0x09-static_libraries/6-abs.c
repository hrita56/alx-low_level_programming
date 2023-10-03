#include "main.h"
/**
 * _abs - function for absolute value
 * @a: function parameter
 * Return: -a and a
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
