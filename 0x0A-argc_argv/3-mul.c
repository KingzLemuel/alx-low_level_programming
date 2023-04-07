#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: stores number of input
 * @argv: stores the strings
 * Return: Always 0 (Success)
 *
*/
int main(int argc, char *argv[])
{
if (argc == 3)
{
int count1 = atoi(argv[1]);
int count2 = atoi(argv[2]);
printf("%d\n", count1 * count2);
}
else
{
printf("Error\n");
}
return (1);
}
