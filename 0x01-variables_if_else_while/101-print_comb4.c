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
			int k = 50;

			do {

			if (i < j && j < k)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{

				} else
				{
				putchar(',');
				putchar(' ');
				}
			}
			k++;
			} while (k < 58);
			j++;
		} while (j < 57);
		i++;
	} while (i < 56);
	putchar('\n');
	return (0);
}
