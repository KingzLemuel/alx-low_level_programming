#include "main.h"

/**
 *_memcpy - copies the content of one memory area to another memory area
 *@dest: destination memory area
 *@src: source memory area
 *@n: the number of bytes
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && n > 0)
{

dest[i] = src[j];
i++;
j++;
}
return (dest);
}
