#include "main.h"
#include <stdio.h>

/**
 * factorial- Retuns the factorial of a given number
 * @n: the number
 * Return: n! or -1(if n < 1)
 *
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else
if (n == 1)
return (1);
else
{
return (n * factorial(n - 1));
}
}
