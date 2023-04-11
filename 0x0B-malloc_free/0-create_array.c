#include "main.h"
#include <stdio.h>

/**
 *create_array - a function that creates an array of chars
 *@size: size of the array
 *@c: character
 *Return: 0 for success
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *p = (char *)malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
