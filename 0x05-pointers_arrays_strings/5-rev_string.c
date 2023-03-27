#include "main.h"
/**
 *rev_string- prints a string in reverse order
 *@s: the input string
 *Return: 0
 *
*/
void rev_string(char *s)
{
int rev = s[0];
int i;
int c = 0;

while (s[c] != '\0')
c++;
for (i = 0; i < c; i++)
{
c--;
rev = s[i];
s[i] = s[c];
s[c] = rev;
}
}
