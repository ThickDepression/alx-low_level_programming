#include "main.h"

/**
 *binary_to_uint - a function that converts a bnry to unit
 *@b: binary num
 *Return: the converted num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	const char *p = b;

	if (b == NULL)
		return (0);
	while (*p != '\0')
	{
		if (*p == '0')
		{
			result <<= 1;
		}
		else if (*p == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
		p++;
	}
	return (result);
}

