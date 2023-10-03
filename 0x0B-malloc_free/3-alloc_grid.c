#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function to make grid
 * @width: inut wisth
 * @height: input height
 * Return: 2 dimession array
 */
int **alloc_grid(int width, int height)
{
	int **dim;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim = malloc(sizeof(int *) * height);

	if (dim == NULL)
		return (NULL);

	for (a = 0 ; a < height ; a++)
	{
		dim[a] = malloc(sizeof(int) * width);

		if (dim[a] == NULL)
		{
			for (; a > 0 ; a--)
				free(dim[a]);

			free(dim);
			return (NULL);
		}
	}

	for (a = 0 ; a < height ; a++)
	{
		for (b = 0 ; b < width ; b++)
			dim[a][b] = 0;
	}

	return (dim);
}
