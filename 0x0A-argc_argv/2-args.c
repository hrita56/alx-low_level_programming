#include <stdio.h>
#include "main.h"

/**
 * main - function to print all recived argument
 * @argc: no of argument
 * @argv: array of argument
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
