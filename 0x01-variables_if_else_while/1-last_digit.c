#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main -Entry point
 *
 * Return: Always 0 (succses)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	return (0);
}
