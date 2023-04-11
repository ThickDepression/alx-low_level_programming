#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcat(char *dest, char *src);

/**
 *str_concat -  a function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: returns concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	n = _strlen(s1) + _strlen(s2);
	p = (char *)malloc((n + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	_strcat(p, s1);
	_strcat(p, s2);
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
 *_strcat -  append
 *@src: source
 *@dest: destination
 *Return: returns
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
