#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: number 1
 * @b: number 2
 * Return: sum of numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - finds difference between two numbers
 * @a: num 1
 * @b: num 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - gives the product of two integers
 * @a: num1
 * @b: num2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - finds the quotience when 'a' is divided by 'b'
 * @a: num1
 * @b: num2
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - find the of 'a' modulus 'b'
 * @a: num1
 * @b: num2
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
