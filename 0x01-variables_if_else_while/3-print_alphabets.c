#include <stdio.h>

/**
 * main - Prints alphabets in lower case followed by upper case
 *
 *Return: Always 0 (success)
*/
int main(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
putchar (n);
}
for (n = 'A'; n <= 'Z'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
