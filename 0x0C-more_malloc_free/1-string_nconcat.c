#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - a function that allocates memory
 *@b: how many bytes to allocate
 *Return: 0 for success
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
