#include <stdio.h>

/**
 * main - Prints all numbers of base 16
 *
 *Return: Always 0 (success)
*/
int main(void)
{
int n;
int hex;
for (n = '0'; n <= '9'; n++)
{
putchar (n);
}
for (hex = 'a'; hex <= 'f'; hex++)
{
putchar (hex); 
}
putchar('\n');
return (0);
}
