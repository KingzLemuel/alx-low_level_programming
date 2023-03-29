#include "main.h"
/**
 *_strcat - Concatenates two strings
 *@src: The source
 *@dest: The destination
 *Return: Dest
 * 
*/
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
