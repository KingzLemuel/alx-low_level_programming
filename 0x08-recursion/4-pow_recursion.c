#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Retuns the value of x to power of y
 * @x: the root number
 * @y: the power or exponent of x
 * Return: x^y or -1(if n < 1)
 *
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
if (y == 0)
{
return (1);
}
else
{

return (x * _pow_recursion(x, y - 1));
}
}
