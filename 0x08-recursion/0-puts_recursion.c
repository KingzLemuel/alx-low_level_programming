#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: the string to be printed
 * Return: Aways 0 (Success)
 *
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
