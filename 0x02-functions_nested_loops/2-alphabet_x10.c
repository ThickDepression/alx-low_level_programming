#include "main.h"
/**
 *print_alphabet_x10 - a function that prints ten times the alphabet.
 *
 */
void print_alphabet_x10(void)
{
	int c = 0;

	do {
	int alpha = 'a';

	do {
	_putchar(alpha);
	alpha++;
	} while (alpha <= 'z');
	c++;
	_putchar('\n');
	} while (c < 10);
}
