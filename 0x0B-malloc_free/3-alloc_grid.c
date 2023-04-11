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
	int *p1;
	int *p2;
	int **pt;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p1 = (int *)malloc(width * sizeof(int));
	p2 = (int *)malloc(height * sizeof(int));
	pt = (int **)malloc(height * sizeof(int *));
	if (p1 == NULL || p2 == NULL || pt == NULL)
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
		free(p1);
		free(p2);
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
