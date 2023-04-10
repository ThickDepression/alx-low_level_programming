#include <stdio.h>
#include <stdlib.h>

int coinCounter(int n);
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
	printf("%d\n", coinCounter(atoi(argv[1])));
	return (0);
}
/**
 *coinCounter - finds the min of change
 *@n: num passed from main
 *Return: returns the count
 */
int coinCounter(int n)
{
	int count = 0;

	if (n == 0)
	{
		return (0);
	}
	if (n >= 25)
	{
		count++;
		count += coinCounter(n - 25);
	}
	else if (n >= 10)
	{
		count++;
		count += coinCounter(n - 10);
	}
	else if (n >= 5)
	{
		count++;
		count += coinCounter(n - 5);
	}
	else if (n >= 2)
	{
		count++;
		count += coinCounter(n - 2);
	}
	else if (n >= 1)
	{
		count++;
		count += coinCounter(n - 1);
	}
	return (count);
}
