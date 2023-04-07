#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds two numbers
 * @argc: stores number of input
 * @argv: stores the strings
 * Return: Always 0 (Success) and 1 (Failure)
 *
*/
int main(int argc, char *argv[])
{
int i, j, count = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < 48 || argv[i][j] > 57)
{
printf("Error\n");
return (1);
}
}
count += atoi(argv[i]);
}
printf("%d\n", count);
}
else if (argc == 1)
printf("0\n");

return (0);
}
