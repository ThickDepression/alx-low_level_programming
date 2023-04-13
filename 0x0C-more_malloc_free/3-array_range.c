#include "main.h"
#include <stdlib.h>

/**
 *array_range -  a function that creates an array of integers.
 *@min: minimum value
 *@max: maximum value
 *Return: 0 for sucess
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, rg;

	if (min > max)
		return (NULL);

	if (min == 0)
		rg = max + 1;

	else
		rg = max - min + 1;

	ptr = malloc(sizeof(int) * rg);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < rg; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
