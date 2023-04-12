#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates an array of chars
 * @width: the width
 * @height: The height
 *
 * Return: The array
*/
int **alloc_grid(int width, int height)
{
int **dim_array;
int a, b;
if (height <= 0 || width <= 0)
{
return (NULL);
}
dim_array = (int**) malloc(sizeof(int*) * height);
if (dim_array == NULL)
{
return (NULL);
}
for (a = 0; a < height; a++)
{
dim_array[a] = (int *) malloc(sizeof(int)* width);
if (dim_array[a] == NULL)
{
free (dim_array);
for (b = 0; b <= a; b++)
{
free(dim_array[b]);
}
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for(b = 0; b < width; b++)
{
dim_array[a][b] = 0;
}
}
return (dim_array);
}
