#include <stdlib.h>
#include "main.h"

int lenofword(char *str);
int word_counter(char *str);

/**
 *strtow - a function that splits a string into words.
 *@str: string to be splitted
 *Return: a function that splits a string into words.
 */

char **strtow(char *str)
{
	char **ptr;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = word_counter(str);
	if (words == 0)
	{
	return (NULL);
	}
	ptr = malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
		{
			i++;
		}
		letters = lenofword(str + i);
		ptr[w] = malloc(sizeof(char) * (letters + 1));
		if (ptr[w] == NULL)
		{
		for (; w >= 0; w--)
		{
			free(ptr[w]);
		}
			free(ptr);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			*(ptr[w] + l) = *(str + i++);
		}
		*(ptr[w] + l) = '\0';
	}
	*(ptr + w) = NULL;
	return (ptr);
}

/**
 *lenofword - determines len
 *@str: string to be examined
 *Return: size
 */

int lenofword(char *str)
{
	int i = 0, size = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		size++;
		i++;
	}
	return (size);
}

/**
 *word_counter - count words
 *@str: string to be examined
 *Return: words
 */

int word_counter(char *str)
{
	int i = 0, words = 0, size = 0;

	for (i = 0; *(str + i); i++)
	{
		size++;
	}
	for (i = 0; i < size; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += lenofword(str + i);
		}
	}
	return (words);
}

