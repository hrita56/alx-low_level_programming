#include "main.h"
/**
 * main - functio to peint no of agrment to be passed to the program
 * @argc: no of arguments
 * @argv: array fo an argument
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
