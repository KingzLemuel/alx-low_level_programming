#include <stdio.h>
#include "main.h"
/**
 *print_line - print lines on the console
 *@n: number of (-) to be printed
 * Return: Always 0 (Success)
*/
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}