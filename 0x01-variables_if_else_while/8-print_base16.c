#include <stdio.h>
/**
 * main - main function
 * Return: return 0 always
 */
int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i);
	for (j = 'a' ; j < 'g' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
