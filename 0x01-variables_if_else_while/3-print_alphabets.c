#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';
	char LETTER = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (LETTER <= 'Z')
	{
		putchar(LETTER);
		LETTER++;
	}
	putchar('\n');
	return (0);
}
