#include <stdio.h>
#include "main.h"
/**
 *_isdigit - check for digitd
 *
 *@c: character to be checked
 *
 * Return: return 1 if true else return 0
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
