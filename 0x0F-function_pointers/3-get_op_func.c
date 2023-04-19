#include "3-calc.h"

/**
 *get_op_func -function that selects the op_fct
 *@s: op passed
 *Return: int
 */

int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
