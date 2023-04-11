	#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 *_strdup - a function that returns a pointer
 *@str: string to be copied
 *Return: pointer to the copied string
 */

char *_strdup(char *str)
{
	int n;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	n = _strlen(str) + 1;
	p = (char *)malloc(n * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	_strcpy(p, str);
	return (p);
}

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

/**
 **_strcpy - copies
 *@src: source
 *@dest: destination
 *Return: returns
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
