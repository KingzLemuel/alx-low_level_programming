#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the lenth of substring
 * @s: string
 * @accept: substring
 * Return: number of bytes in substring of s
 *
*/
unsigned int _strspn(char *s, char *accept)
{
int i; 
int j;
unsigned int n = 0;

for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
n++;

}
}
return (n);
}
