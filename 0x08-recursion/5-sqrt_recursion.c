#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - Retuns the value of x to power of y
 * @n: the number whose suare root is returned
 * Return: 1 if n is a perfect square -1 if otherwise
 *
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
if (n == 1)
{
return (1);
}
else
{

return ((_sqrt_recursion(n / 2 + n % 10 + 1)));
}
}
