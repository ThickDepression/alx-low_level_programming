#include "3-calc.h"

/**
 *op_add - adds two nums
 *@a: num1
 *@b: num2
 *Return: result of op
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substracts two nums
 *@a: num1
 *@b: num2
 *Return: result of op
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two nums
 *@a: num1
 *@b: num2
 *Return: result of op
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two nums
 *@a: num1
 *@b: num2
 *Return: result of op
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - modulo two nums
 *@a: num1
 *@b: num2
 *Return: result of op
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
