#include "main.h"

/**
 *_str_len - counts a string
 *@s: string examined
 *Return: count
 */

int _str_len(char *s)
{
if (*s)
{
return (1 + _str_len(s + 1));
}
else
{
return (0);
}
}

/**
 *palindrome_helper - a fct that chcks if first char == last char
 *@s: string to be treated
 *@len: len of the string
 *Return: returns 1 or 0
 */

int palindrome_helper(char *s, int len)
{
if (len <= 1)
{
return (1);
}
if (*s == *(s + len - 1))
{
return (palindrome_helper(s + 1, len - 2));
}
else
{
return (0);
}
}

/**
 *is_palindrome -  a function that returns 1 or 0
 *@s: string to be treated
 *Return: returns 1 or 0
 */

int is_palindrome(char *s)
{
int len = _str_len(s);
if (len == 0)
{
return (1);
}
return (palindrome_helper(s, len));
}
