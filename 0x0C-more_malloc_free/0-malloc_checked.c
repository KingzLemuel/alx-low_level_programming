#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: size of allocated memory
 *
 * Return: The array
*/
void *malloc_checked(unsigned int b)
{
int *reserved;

reserved = malloc(b);
if (reserved == NULL)
{
exit(98);
}
return (reserved);
}
