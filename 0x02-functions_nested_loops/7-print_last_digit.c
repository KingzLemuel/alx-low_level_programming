#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int n)
{
	int last_dgt;

	last_dgt = n % 10;

	if (last_dgt < 0)
	{
		last_dgt = last_dgt * -1;
	}

	_putchar(last_dgt + '0');

	return (last_dgt);
}
