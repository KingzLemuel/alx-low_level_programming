#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum
 *
*/

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum;
if (n == 0)
{
return (0);
}
va_start(args, n);
sum = 0;
for (i = 0; i < n; i++)
{
sum = sum + va_arg(args,  unsigned int);
}
va_end(args);

return (sum);
}
