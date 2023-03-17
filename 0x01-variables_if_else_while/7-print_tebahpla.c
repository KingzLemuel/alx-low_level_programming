#include <stdio.h>

/**
 * main - Prints alphabets in lower case
 *
 *Return: Always 0 (success)
*/
int main(void)
{
int n;
for (n = 'z'; n >= 'a'; n--)
{
putchar (n);
}
putchar('\n');
return (0);
}
