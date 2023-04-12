#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);

/**
 *strtow - a function that splits a string into p.
 *@str: string to be splitted
 *Return: pointer
 */

char **strtow(char *str)
{
	int i, j;
	char **p;
	int n, count = 0;
	int m, len = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	n = _strlen(str);
	for (i = 0; i < n; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}
	p = (char **)malloc((count + 1) * sizeof(char *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (i == 0 || str[i - 1] == ' ')
			{
				for (m = i; str[m] && str[m] != ' '; m++)
				{
					len++;
				}
				p[j] = malloc((len + 1) * sizeof(char));
				if (p[j] == NULL)
				{
					for (m = 0; m < j; m++)
					{
						free(p[m]);
					}
				free(p);
				return (NULL);
				}

			_strncpy(p[j], &str[i], len);
			p[j][len] = '\0';
			j++;
			}
		}
	}
	p[count] = NULL;
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
 *_strncpy - used to copy a specified number of characters from one string
 *@dest: the destination string
 *@src: the source string
 *@n:the number of characters to copy
 *Return: always dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int nsrc;

	for (nsrc = 0; nsrc < n && src[nsrc] != '\0'; nsrc++)
	{
		dest[nsrc] = src[nsrc];
	}
	while (nsrc < n)
	{
		dest[nsrc] = '\0';
		nsrc++;
	}
	return (dest);
}
