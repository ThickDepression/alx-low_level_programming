#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - a function that allocates memory for an array
 *@nmemb: number of elements
 *@size: size bytes
 *Return: always 0 for success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
