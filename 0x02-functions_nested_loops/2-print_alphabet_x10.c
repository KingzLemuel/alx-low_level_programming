#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet in lower case 10x
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
int i;
int j = 1;
while (j <= 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
j++;
}
}
