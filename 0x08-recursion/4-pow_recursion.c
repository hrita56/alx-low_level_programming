#include "main.h"
/**
 * _pow_recursion - function to return value of c raised to the power of y
 * @x: value to be raise
 * @y: power
 * Return: result of the powe
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
