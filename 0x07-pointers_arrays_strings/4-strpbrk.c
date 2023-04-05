#include "main.h"
#include <string.h>

/**
 * _strpbrk - seacrches a string for a set of bytes
 * @s: string
 * @accept: substring
 * Return: number of bytes in substring of s
 *
*/
char *_strpbrk(char *s, char *accept)
{
{
int i = 0;

while (*s)
{
while (accept[i] != '\0')
{
if (*s == accept[i])
return (s);
i++;
}
i = 0;
s++;
}
return ('\0');
}

}
