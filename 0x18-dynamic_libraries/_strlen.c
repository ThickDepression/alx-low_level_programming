#include "main.h"

/**
 *_strlen - counts
 *@s: string or smtg
 *Return: counter
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
