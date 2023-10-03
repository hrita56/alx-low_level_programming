#include "main.h"
/**
 *  _islower - function for lowercase
 * @c: parameter to be checked
 *  Return: 1 or 0 when successfull
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
