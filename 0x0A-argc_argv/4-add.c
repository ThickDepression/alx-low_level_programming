#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: arg count
 *@argv: arg vector
 *Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *end;
		long val = strtol(argv[i], &end, 10);

		if (*end != '\0')
		{
			printf("Error\n");
			return (1);
		}

		sum += val;
	}

	printf("%d\n", sum);
	return (0);
}
