#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0, always (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	k = ptr(i, j);
	printf("%d\n", k);

	return (0);
}
