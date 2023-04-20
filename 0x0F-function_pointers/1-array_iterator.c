#include "function_pointers.h"

/**
 * array_iterator - iterates through an array of and executes by a callback
 * @array: the array for iteration
 * @size: array size
 * @action: call back function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
