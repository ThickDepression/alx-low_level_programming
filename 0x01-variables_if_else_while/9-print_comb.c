#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 48;

	do {
		putchar(num);
		if (num != 57)
		{
		putchar(',');
		putchar(' ');
		}
		num++;
	} while (num < 58);
	putchar('\n');
	return (0);
}
