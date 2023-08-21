#include "main.h"
/**
 *_strcmp - a function that compare chars from strings
 *@s1: the first string
 *@s2: the second string
 *Return: always the result of the diffrence of the two char in s1 and s2 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
