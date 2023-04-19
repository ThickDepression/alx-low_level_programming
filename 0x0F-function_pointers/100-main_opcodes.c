#include "function_pointers.h"

/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int bytes_num;
	int i;
	addr *main_add;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes_num = atoi(argv[1]);
	if (bytes_num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	main_add = (addr *) main;
	for (i = 0; i < bytes_num; i++)
	{
		printf("%02x ", *(main_add + i));
	}
	printf("\n");
	return (0);
}