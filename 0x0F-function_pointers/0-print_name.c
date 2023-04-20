#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints of the function of a name
 * @name: the input name
 * @f: function pointer
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
