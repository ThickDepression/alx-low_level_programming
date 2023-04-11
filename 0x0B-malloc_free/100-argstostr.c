#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 *argstostr - a function that concatenates
 *@ac: argument count
 *@av: argument vector
 *Return: p
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int n = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		n += _strlen(av[j]) + 1;
	}
	p = (char *)malloc(n * sizeof(char) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[k++] = av[i][j];
		}
		p[k++] = '\n';
	}
	p[k] = '\0';
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
