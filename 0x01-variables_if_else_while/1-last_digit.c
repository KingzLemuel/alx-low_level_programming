#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Checks the value of the last digit of n
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
int Last_dgt;

srand(time(0));
n = rand() - RAND_MAX / 2;
Last_dgt = n % 10;
if (Last_dgt > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, Last_dgt);
}
else
if (Last_dgt == 0)
{
printf("Last digit of %d is %d and is 0\n", n, Last_dgt);
}
else
if (Last_dgt < 6 && Last_dgt != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_dgt);
}
return (0);
}
