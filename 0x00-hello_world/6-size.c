#include <stdio.h>
/**
 * main - this is main fuction
 * Return: always return 0 when succeful
 */
int main(void)
{
	long long int a;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of aint: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(a));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
