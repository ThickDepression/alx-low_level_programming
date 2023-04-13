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
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
