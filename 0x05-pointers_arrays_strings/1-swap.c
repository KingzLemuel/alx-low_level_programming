#include "main.h"

/**
 *swap_int - Swaps the values of two memory Addresses
 *@a: the the first value
 *@b: the second value
 *Return: 0
 *
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
