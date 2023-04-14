#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 *@s2: second string
 *@n: size of memory
 * Return: The array
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
   unsigned int i;
    unsigned int j;
    unsigned int s1_len;
    unsigned int target_len;
    char *target;

    if (s1 == NULL)
            s1 = "";
    if (s2 == NULL)
            s2 = "";
    for (i = 0; s1[i]; i++)
            s1_len++;

    target_len = s1_len + n;

    target = malloc(sizeof(char) * (target_len + 1));
    if (target == NULL)
            return (NULL);
    for (i = 0; i < s1_len; i++)
    {
            target[i] = s1[i];
    }
    for(j = 0; j < n; j++, i++)
    {
            target[i] = s2[j];
    }
    target[i] = '\0';
    return (target);
}
