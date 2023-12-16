#include "search_algos.h"

/**
 *_binary_search - emplimentation of binary search
 *@array: pointer to the first element
 *@left: left of the array
 *@right: right of the array
 *@value: the value of the array
 *Return: index or -1
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 *exponential_search -  a function that searches for a value in a sorted
 *array of integers using the Exponential search algorithm
 *@array: pointer to the start of the array
 *@size: size of the array
 *@value: value to be searched for
 *Return: index where value is located or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	int exp = 1, left, right;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (exp < (int)size && array[exp] < value)
	{
		printf("Value checked array[%d] = [%d]\n", exp, array[exp]);
		if (array[exp] == value)
			return (exp);
		exp = exp * 2;
	}
	right = exp < (int)size ? exp : (int)size - 1;
	left = exp / 2;
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	exp = _binary_search(array, left, right, value);
	return (exp);
}
