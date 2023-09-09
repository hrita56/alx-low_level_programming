#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 * Return: always return 0 when successfull
 */
int main(void)
{
		int n;
		int o;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				o = n % 10;
				if (o > 5)
					printf("this value %d is positive", n, o);
				else if (o == 0)
					printf("this value %d is zero", n, o);
				else if (o < 6 && o != 0)
					printf("this value %d is negative", n, o);
				printf("\n");

					return (0);
}
