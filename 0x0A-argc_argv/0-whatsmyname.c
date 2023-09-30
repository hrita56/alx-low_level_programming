#include <stdio.h>
#include "main.h"
/**
 * main - functon to print program name
 * @argc: no of agrumenr
 * @argv: an array of argment
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
