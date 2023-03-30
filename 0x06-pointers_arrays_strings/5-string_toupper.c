#include "main.h"
/**
 *string_toupper - a function that changes the lower case chars to uppercase
 *@x: the string input
 *Return: always x
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i] != 0)
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] = x[i] - 32;
		}
		i++;
	}
	return (x);
}
