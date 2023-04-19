#include "3-calc.h"

/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int result;
	int num1, num2;
	char *opr;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	opr = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*opr != '+' && *opr != '-' && *opr != '*' && *opr != '/' && *opr != '%')
	{
		printf("Error\n");
		exit(99);
	}
	result = (get_op_func(opr)(num1, num2));
	printf("%d\n", result);
	return (0);
}




















