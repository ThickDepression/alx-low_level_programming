#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n = 48;
	int nlast = 58;
	int a = 97;
	int alast = 103;

	do {
		putchar(n);
		n++;
	} while (n < nlast);
	do {
		putchar(a);
		a++;
	} while (a < alast);
	putchar('\n');
	return (0);

}
