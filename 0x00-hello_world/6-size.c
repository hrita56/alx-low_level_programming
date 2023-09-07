#include <stdio.h>
/**
 * main - this is main fuction
 * Return: always return 0 when succeful
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(char));
	printf("Size of aint: %lu byte(s)", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(float));
}
