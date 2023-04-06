#include "main.h"
#include <stdio.h>
/**
 * is_divisible - Checks if a number is divisible or not
 * @i: the number to be checked
 * @j: for iteration
 * Return: 1 or 0 if the number is divisible or not prime respectively
*/
int is_divisible(int i, int j)
{
if (i == j)
{
return (1);
}
else if (i % j == 0)
{
return (0);
}
else
{
return (is_divisible(i, j + 1));
}
}

/**
 * is_prime_number - Checks if a number is prime or not
 * @n: the number
 * Return: 1 or 0 if the number is prime or not prime respectively
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (is_divisible(n, 2));
}
}
