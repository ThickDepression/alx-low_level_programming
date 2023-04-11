#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: argument vount
 *@argv: argument vector
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int ct;
	int cn[5] = {25, 10, 5, 2, 1};
	int count[5] = {0};
	int i;
	int j;
	int total_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	ct = atoi(argv[1]);

	if (ct < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && ct >= 1; i++)
	{
		count[i] = ct / cn[i];
		ct %= cn[i];
	}
	for (j = 0; j < 5; j++)
	{
		total_count += count[j];
	}

	printf("%d\n", total_count);
	return (0);
}
