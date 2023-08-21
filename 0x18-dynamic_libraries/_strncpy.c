#include "main.h"

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
