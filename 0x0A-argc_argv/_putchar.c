#include <stdio.h>
#include "main.h"
/**
 * _putchar - function to stdout
 * @c: printed character
 * Return: 1 success, -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
