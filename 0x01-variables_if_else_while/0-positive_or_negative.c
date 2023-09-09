#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - mainf function
 * Return: 0 retuns when succef
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				n = n % 10;
				if (n > 0)
					printf("%d is positive", n);
				else if (n == 0)
					printf("%d is zero", n);
				else if (n < 0 && n != 0)
					printf("%d is negative", n);
				printf("\n");

					return (0);
}
