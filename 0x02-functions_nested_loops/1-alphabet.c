#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet in lower case
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
