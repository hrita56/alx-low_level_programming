#include "main.h"
#include <stdio.h>
/**
 *  times_table - function to print timrtable
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			r = i * j;
			printf("%2d", r);
	}
		printf("\n");
	}
}

