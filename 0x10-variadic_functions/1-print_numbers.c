#include "variadic_functions.h"

/**
 *print_numbers - a function that prints numbers
 *@separator: separates nums
 *@n: num of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
