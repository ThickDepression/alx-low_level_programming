#include <stdlib.h>
#include "main.h"

/**
 * converttodigit - convert a char to integer.
 * @x: character to convert.
 * Return: integer.
 **/

int converttodigit(char x)
{
	unsigned int res;

	if (x <= '9' && x >= '0')
		res = x - '0';
	return (res);
}

/**
 * numchecker - checks if its a num.
 * @argv: Pointer to string.
 * Return: success (0).
 **/
int numchecker(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (1);
	return (0);
}

/**
 *_calloc - allocate array of size * nmemb.
 * @nmemb: number of elements.
 * @size: size of element.
 * Return: pointer to array.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i;

	tab = malloc(size * nmemb);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		tab[i] = '0';

	return (tab);
}

/**
 * arr_mul - multiply two arrays.
 * @a1: first array.
 * @len_num1: length of array a1.
 * @a2:  char.
 * @a3: array for result.
 * @lena: length of array a3.
 * Return: pointer to array.
 **/

void *arr_mul(char *a1, int len_num1, char a2, char *a3, int lena)
{
	int mul = 0, i, k;

	k = lena;
	for (i = len_num1 - 1; i >= 0 ; i--)
	{
		mul += (a1[i] - '0') * (a2 - '0') + (a3[k] - '0');
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

		while (mul != 0)
		{
			mul += a3[k] - '0';
			a3[k] = (mul % 10) + '0';
			mul /= 10;
			k--;
		}

	return (a3);
}
/**
 * arr_printer - print all digits of array.
 * @nb: number of elements to print.
 * @a: array of elements.
 **/
void arr_printer(char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}

/**
 *main - program that multiplies two positive numbers.
 *@argc: argumen count.
 *@argv: argument vector.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, c, len_num1, len_num2, len_t;
	char error[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *result;

	if (argc != 3 || numchecker(argv[1]) == 1 || numchecker(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(error[i]);
		}
		exit(98);
	}
	for (len_num1 = 0; argv[1][len_num1]; len_num1++)
	;
	for (len_num2 = 0; argv[2][len_num2]; len_num2++)
	;
	len_t = len_num1 + len_num2;
	result = _calloc(len_t, sizeof(int));
	if (result == NULL)
	{
		free(result);
		return (0);
	}
	for (i = len_num2 - 1, c = 0; i >= 0; i--)
	{
	result = arr_mul(argv[1], len_num1, argv[2][i], result, (len_t - 1 - c));
	c++;
	}
	arr_printer(result, len_t);
	free(result);
	exit(EXIT_SUCCESS);
	return (0);
}
