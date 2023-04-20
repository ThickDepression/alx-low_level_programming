#include "variadic_functions.h"

/**
 * print_args - prints the arguments in a variable argument list
 * @format: the format string that specifies the types of the arguments
 * @args: the variable argument list
 */
void print_args(const char *format, va_list args)
{
	char *sep = "";
	int i;
	char c;
	double f;
	char *s;

	while (*format)
	{
		switch (*format++)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", sep, c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%s%d", sep, i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%s%f", sep, f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("%s(nil)", sep);
				printf("%s%s", sep, s);
				break;
			default:
				break;
		}
		sep = ", ";
	}
	printf("\n");
}

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	print_args(format, args);
	va_end(args);
}
