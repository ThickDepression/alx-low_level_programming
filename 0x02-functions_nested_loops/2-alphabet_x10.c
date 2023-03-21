#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * parameter i - number of times the first loop will be executed
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
