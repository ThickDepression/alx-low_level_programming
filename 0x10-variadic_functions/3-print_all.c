#include "variadic_functions.h"

/**
 * print_args - prints the arguments
 * @format: a list of types of arguments
 * @args: the variable argument list
 */
void print_args(const char *format, va_list args)
{
	char *str, *sep = ", ";
	int x = 0;


	while (format != NULL && format[x] != '\0')
	{
		if (format[x + 1] == '\0')
			sep = "";
		switch (format[x])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)%s", sep);
					break;
				}
				printf("%s%s", str, sep);
				break;
			default:
				break;
		}
		x++;
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
