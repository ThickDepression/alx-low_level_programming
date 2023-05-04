#include "main.h"

/**
 *get_bit -  a function that returns the value of a bit at a given index.
 *@n: num
 *@index: is the index
 *Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
