#include "function_pointers.h"
#include <stddef.h>


/**
 *print_name - a function that prints a name.
 *@name: the name to be printed
 *@f: the function used to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
