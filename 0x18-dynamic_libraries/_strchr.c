#include "main.h"

/**
 *_strchr - a function that locates a character in a string.
 *@s: main string
 *@c: character to be exaamened
 *Return: returns
 */

char *_strchr(char *s, char c)
{
	char *ps = s;

	while (*ps)
	{
		if (*ps == c)
		{
			return (ps);
		}
		ps++;
	}
	if (!c)
	{
		return (ps);
	}
	return (0);
}
