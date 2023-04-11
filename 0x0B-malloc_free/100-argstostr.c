#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/*
 *argstostr - 
 *@ac:
 *@av:
 *Return:
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int n = 0, i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		n += _strlen(av[j]) + 1;
	}
	p = (char *)malloc(n * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[n++] = av[i][j];
		}
		p[n++] = '\n';
	}
	p[n] = '\0';	
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
