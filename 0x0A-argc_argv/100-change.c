#include <stdio.h>
#include <stdlib.h>

int coin_counter(int n);
/**
 *main - main function
 *@argc: arg count
 *@argv: arg vector
 *Return: 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		return (printf("Error\n"), 1);
	}
	if (atoi(argv[1]) < 0)
	{
		return (printf("0\n"), 0);
	}
	printf("%d\n", coin_counter(atoi(argv[1])));
	return (0);
}
/**
 *coin_counter - finds the min of change
 *@n: num passed from main
 *Return: returns the count
 */
int coin_counter(int n)
{
	int count = 0;

	if (n == 0)
	{
		return (0);
	}
	if (n >= 25)
	{
		count += 1 + coin_counter(n - 25);
	}
	else if (n >= 10)
	{
		count += 1 + coin_counter(n - 10);
	}
	else if (n >= 5)
	{
		count += 1 + coin_counter(n - 5);
	}
	else if (n >= 1)
	{
		count += 1 + coin_counter(n - 1);
	}
	return (count);
}
