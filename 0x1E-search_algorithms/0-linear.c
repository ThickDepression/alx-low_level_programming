#include "search_algos.h"
#include <stdio.h>

/**
 *linear_search - a function that searches for a value
 *in an array of integers using the Linear search algorithm
 *@array: array is a pointer to the first element of the arra
 *@size: is the number of elements in array
 *@value:  is the value to search for
 *Return: either the index of the value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
