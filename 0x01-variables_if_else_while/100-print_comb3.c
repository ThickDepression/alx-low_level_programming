#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int i = 48;

	do {
		int j = 49;

		do {
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{

				} else
				{
				putchar(',');
				putchar(' ');
				}
			}
			j++;
		} while (j < 58);
		i++;
	} while (i < 57);
	putchar('\n');
	return (0);
}
