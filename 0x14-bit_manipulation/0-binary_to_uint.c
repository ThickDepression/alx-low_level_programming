#include "main.h"

/**
 *binary_to_uint - a function that converts a binary to u_int
 *@b: binary num
 *Return: the converted num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	const char *pt_to_b = b;

	if (b == NULL)
		return (0);
	while (*pt_to_b != '\0')
	{
		if (*pt_to_b == '0')
			result <<= 1;
		else if (*pt_to_b == '1')
			result = (result << 1) | 1;
		else
			return (0);
		pt_to_b++;
	}
	return (result);
}
