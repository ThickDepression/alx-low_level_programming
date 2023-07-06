#include "main.h"

/**
 *flip_bits - a function that returns the number of bits
 *@n: number
 *@m:number
 *Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count++;
		result &= (result - 1);
	}

	return (count);
}
