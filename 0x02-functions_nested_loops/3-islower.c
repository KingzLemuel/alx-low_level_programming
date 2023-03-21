#include <stdio.h>
#include "main.h"
/**
 *_islower - prints alphabet in lower case 10x
 *@c: the character to be checked
 * Return: Always 0 (Success)
*/
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
