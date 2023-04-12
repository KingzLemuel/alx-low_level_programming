#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - creates an array of chars
 * @grid: space to be freed
 * @height: The height
 *
 * Return: Always 0 (Successs)
*/
void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

