#include <stdio.h>

/**
 * main - Prints alphabets in lower case
 *
 *Return: Always 0 (success)
*/
int main(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
if (n != 'e' && n != 'q')
{
putchar (n);
}
putchar('\n');
return (0);
}
