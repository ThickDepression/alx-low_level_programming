#include "function_pointers.h"

void print_name_as_is(char *name);
void print_name_uppercase(char *name);

/**
 *print_name - a function that prints a name.
 *@name: the name to be printed
 *@f: the function used to print
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
