#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name using function pointer
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;

	f(name);
}
