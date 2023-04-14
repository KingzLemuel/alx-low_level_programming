#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);

	/* Gets number of values b/w min and max */
	len = (max - min) + 1;

	array = malloc(len * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
