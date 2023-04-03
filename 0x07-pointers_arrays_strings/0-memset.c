#include "main.h"

/**
 *_memset - Fills the memory with a constant byte
 *@s: poiter to the memory to be filled
 *@b: the bytes to be with which the memory is to be filled
 *@n: the number of bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
