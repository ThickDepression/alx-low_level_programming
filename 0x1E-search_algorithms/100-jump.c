#include "search_algos.h"
#include <math.h>
#include <stdio.h>
/**
 *jump_search - a function that searches for a value in
 *a sorted array of integers using the Jump search algorithm
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value of the search
 *Return: index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int index, jump, k, prev;

	if (array == NULL || size == 0)
		return (-1);
	jump = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;
	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
		return (index);
		k++;
		prev = index;
		index = k * jump;
	} while (index < (int)size && array[index] < value);
	printf("Value found between indexes [%d] and [%d]\n", prev, index);
	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		return (prev);
	}
	return (-1);
}
