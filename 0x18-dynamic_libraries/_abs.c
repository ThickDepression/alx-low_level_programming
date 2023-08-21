#include "main.h"
#include <stdlib.h>

/**
 *_abs - a function that computes the absolute value of an integer.
 *@i: num in question
 *Return: always 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs;

		abs = i * -1;
		return (abs);
	}
	return (i);
}
