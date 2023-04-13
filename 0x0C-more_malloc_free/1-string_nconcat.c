#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
 *string_nconcat - a function that concatenates two strings.
 *@s1: first string
 *@s2: second string
 *@n: number of bytes from the first string
 *Return: 0 for success
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len2)
	{
		n = len2;
	}
	ptr = (char *)malloc((len1 + n + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1 + n; i++)
	{
		if (i < len1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[i - len1];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
