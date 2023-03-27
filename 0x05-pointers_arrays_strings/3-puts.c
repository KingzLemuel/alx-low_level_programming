#include "main.h"
/**
 *_puts - prints a string followed by new line
 *@str: the input string
 *Return: string lenght
 *
*/
void _puts(char *str)
{
int len;
for (len = 0; str[len] != '\0'; len++)
{
_putchar(str[len]);
}
_putchar('\n');
}
