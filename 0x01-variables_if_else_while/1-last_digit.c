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
	int d = n % 10;

	if (d > 5)
	{
		printf("Last digit of %d is %i and is greater than 5", n, d);
	}
	else if (d < 6 && d != 0)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0", n, d);
	}
	else
	{
		printf("Last digit of %d is 0 and is 0", n);
	}
	return (0);
}
