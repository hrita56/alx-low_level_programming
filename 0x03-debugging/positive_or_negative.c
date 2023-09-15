#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - function to print negative or positive
 * @i: parametter
 * Return: o;
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative", i);
}
