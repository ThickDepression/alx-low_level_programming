#include "variadic_functions.h"

void print_s(char *str, char *sp);

/**
 * print_args - prints the arguments
 * @format: a list of types of arguments
 * @args: the variable argument list
 */
void print_args(const char *format, va_list args)
{
	char *str, *sep = "";


	while (*format)
	{
		switch (*format++)
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s(nil)", sep);
					break;
				}
				printf("%s%s", sep, str);
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
