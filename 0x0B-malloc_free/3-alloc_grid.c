#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - a function that returns a pointer to a 2D array
 *@width: of array
 *@height: of array
 *Return: pt for success
 */

int **alloc_grid(int width, int height)
{
	int **pt;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pt = (int **)malloc(height * sizeof(int *));
	if (pt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pt[i] = (int *)malloc(width * sizeof(int));
		if (pt[i] == NULL)
		{
		for (j = 0; j < i; j++)
		{
			free(pt[j]);
		}
		free(pt);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			pt[i][j] = 0;
		}
	}
	return (pt);
}
