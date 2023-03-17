#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int j = 122;

	do {
		putchar(j);
		j--;
	} while (j > 96);

	putchar('\n');

	return (0);
}
