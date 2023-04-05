#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string to be reversed
 * Return: Always 0 (Success)
 *
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
