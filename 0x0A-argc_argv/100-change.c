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
	int num;
	int count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	count = centfinder(num);
	printf("%i\n", count);
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
