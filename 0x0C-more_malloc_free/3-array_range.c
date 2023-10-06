#include <stdlib.h>
#include "main.h"
/**
 * array_range - function tha creates an array of integers
 * @min: min range of values tobe stored
 * @max: max range of values tobe stored
 * Return: new array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0 ; min <= max ; i++)
		pointer[i] = min++;

	return (pointer);
}
