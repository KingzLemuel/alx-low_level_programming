#include <stdio.h>
#include "main.h"
/**
 *_isalpha - Checks for alphabetic Character
 *@c: the character to be checked
 * Return: Always 0 (Success)
*/
int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}

}
