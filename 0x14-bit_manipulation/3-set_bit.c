#include "main.h"

/**
 *set_bit - a function that sets the value of a bit to 1
 *@n: num
 *@index: index
 *Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= mask;
	return (1);
}
