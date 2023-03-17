#include <stdio.h>

/**
 * main - Prints single digits of base 10 from 0 without character varriables
 *
 *Return: Always 0 (success)
*/
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar (n);
}
putchar('\n');
return (0);
}
