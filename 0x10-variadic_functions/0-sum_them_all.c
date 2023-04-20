#include "variadic_functions.h"

/**
 *sum_them_all -  a function that returns the sum
 *@n: bumber of arguments
 *Return: 0 for success
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
	va_end(args);
	return (0);
}
