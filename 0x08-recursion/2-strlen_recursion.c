#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Retuns the the lenght of a string
 * @s: the string whose lenght is returned
 * Return: strlen
 *
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return 0;
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
