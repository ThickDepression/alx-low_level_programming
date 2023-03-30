#include "main.h"
/**
 *leet - a function that encodes
 *@a: the string we gonna encode
 *Return: returns
 */
char *leet(char *a)
{
	int i, j;
	char check[] = "aAeEoOtTlL";
	char change[] = "4433007711";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (j = 0; check[j]; j++)
			if (check[j] == *(a + i))
			{
				*(a + i) = change[j];
				break;
			}
	}
	return (a);
}
