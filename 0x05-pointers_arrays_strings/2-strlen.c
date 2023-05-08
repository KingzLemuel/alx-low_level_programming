#include "main.h"

/**
 *_strlen - returns the length of a string.
 *@s: the input string
 *Return: string lenght
 *
*/
int _strlen(char *s)
{
int len;
for (len = 0; s[len] != '\0'; len++)
len++;
return (len);
}
