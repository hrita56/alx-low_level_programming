#include <stdlib.h>
#include <time.h>
/* more headers goes there */

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
					printf("this is value %d is %d greater than 5", n, o);
				else if (o == 0)
					printf("this value %d is %d and is zero", n, o);
				else if (o < 6 && o != 0)
					printf("this value %d is %d less than 6 and not 0", n, o);
				printf("\n");

					return (0);
}