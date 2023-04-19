#include "function_pointers.h"
#include <stddef.h>

/**
 *array_iterator - a function that executes a function
 *@array: array of functions
 *@size: the size of the array
 *@action: a pointer to the usable function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
