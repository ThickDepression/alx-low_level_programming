#include "main.h"
#include <stdlib.h>

/**
 *create_array - a function that creates an array of chars
 *@size: size of the array
 *@c: character
 *Return: 0 for success
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
