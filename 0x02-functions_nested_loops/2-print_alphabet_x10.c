#include "main.h"

/**
 *print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 *Return: always 1 success
 */

void print_alphabet_x10(void)
{
	int i = 0;

	do {
		char alpha = 'a';

		do {
			_putchar(alpha);
			alpha++;

		} while (alpha <= 'z');
		_putchar('\n');
		i++;
	} while (i < 10);
}
