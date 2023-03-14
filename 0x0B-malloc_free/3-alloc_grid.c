#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  Returns a pointer to a 2 dimensional array of integers.
 * @width: Width of the array.
 * @height: Height of the array.
 *
 * Return: A pointer to a 2D array of integers, or
 *	NULL if width || height is 0 or negative/ on failure.
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **i;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(height * sizeof(int *));

	if (i == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		i[h] = malloc(width * sizeof(int));

		if (i[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(i[w]);
			free(i);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			i[h][w] = 0;
	}
	return (i);
}
