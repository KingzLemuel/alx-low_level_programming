#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by new line
 * @separator: string to be printed
 * @n: number  of integers
 * Return: Always 0 (Success)
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, num;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
num = va_arg(args, unsigned int);
printf("%d", num);
if (i != (n - 1))
printf("%s", separator);
}
printf("\n");
}
