#include "function_pointers.h"

/**
 *int_index -  a function that searches for an integer.
 *@array: array searched in
 *@size: number of elements in that array
 *@cmp: a pointer to the usable function
 *Return: 0 for success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
