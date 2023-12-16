#include "search_algos.h"
#include <stdio.h>

/**
 *interpolation_search -  a function that searches for a value in a
 *sorted array of integers using the Interpolation search algorithm
 *@array: the array
 *@size: size of the array
 *@value: the value to be searched
 *Return: index where value is located or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int prob;
	int low = 0;
	int high = (int)size - 1;

	if (!array)
		return (-1);
	while (value >= array[low] && value <= array[high] && low <= high)
	{
		prob =
			low + (high - low) * (value - array[low]) / (array[high] - array[low]);
		printf("Value checked array[%d] = [%d]\n", prob, array[prob]);
		if (array[prob] == value)
			return (prob);
		else if (array[prob] < value)
			low = prob + 1;
		else
			high = prob - 1;
	}
	prob = low + (high - low) * (value - array[low]) / (array[high] - array[low]);
	printf("Value checked array[%d] is out of range\n", prob);
	return (-1);
}
