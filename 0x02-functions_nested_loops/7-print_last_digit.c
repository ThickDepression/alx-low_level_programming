#include "main.h"

/**
 *print_last_digit - last digit
 *@i: number holder
 *Return: always 0
 */

int print_last_digit(int i)
{
int lastdigit;

lastdigit = i % 10;
if (lastdigit < 0)
{
lastdigit = lastdigit * -1;
}
_putchar(lastdigit + '0');
return (lastdigit);
}
