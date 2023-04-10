#include <stdio.h>
#include <stdlib.h>

int centfinder(int n);
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
	printf("%d\n", centfinder(atoi(argv[1])));
	return (0);
}
/**
 *centfinder - finds the min of change
 *@n: num passed from main
 *Return: returns the count
 */

int centfinder(int n)
{
	int count = 0;

	if (n == 0)
	{
		return (0);
	}
	if (n >= 25)
	{
		count++;
		count += centfinder(n - 25);
	}
	else if (n >= 10)
	{
		count++;
		count += centfinder(n - 10);
	}
	else if (n >= 5)
	{
		count++;
		count += centfinder(n - 5);
	}
	else if (n >= 2)
	{
		count++;
		count += centfinder(n - 2);
	}
	else if (n >= 1)
	{
		count++;
		count += centfinder(n - 1);
	}
	return (count);
}
