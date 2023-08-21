#include "main.h"
/**
 *_strncat - a fucntion that append two strings to one
 *@n: parametre
 *@dest: the string that will be appended to
 *@src: the string that will be appanded
 *Return: always a string of chars
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
