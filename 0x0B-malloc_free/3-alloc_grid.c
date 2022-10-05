#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2 dimentional array
 *
 * @width: the width of arry
 *
 * @height: height of array
 *
 * Return: pointer array
 */

int **alloc_grid(int width, int height)
{
	int i, j, a, b;
	int **matx;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matx = (int **)malloc(height * sizeof(int *));
	if (matx == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matx[i] = (int *)malloc(width * sizeof(int));
		if (matx[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(matx[j]);
			free(matx);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			matx[a][b] = 0;
	return (matx);
}
