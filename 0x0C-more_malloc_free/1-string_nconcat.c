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
	unsigned int i, j;
	unsigned int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
	{
		n = len2;
	}
	ptr = malloc((len1 + n + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}

