#include <stdio.h>
/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int counter;
	int countto = 50;
	long a = 1, b = 2;

	printf("%li, %li, ", a, b);
	for (counter = 3; counter <= countto; counter++)
	{
		long c = a + b;

		printf("%li", c);
		if (counter != countto)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
