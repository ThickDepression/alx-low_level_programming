#include "variadic_functions.h"

/**
 *print_all - a function that prints anything.
 *@format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int arg_num = 0, v = 0, i;
	va_list args;
	char c;
	float f;
	char *s, *sep;

	while (format[arg_num] != '\0')
		arg_num++;
	va_start(args, format);
	while (v < arg_num)
	{
		if (format[v + 1] == '\0')
			sep = "";
		else
			sep = ", ";
		switch (format[v])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c%s", c, sep);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d%s", i, sep);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f%s", f, sep);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s%s", s, sep);
				break;
			default:
				break;
		}
		v++;
	}
	printf("\n");
	va_end(args);
}
