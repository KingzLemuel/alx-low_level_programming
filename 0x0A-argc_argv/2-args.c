#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: stores number of input
 * @argv: stores the strings
 * Return: Always 0 (Success)
 *
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
