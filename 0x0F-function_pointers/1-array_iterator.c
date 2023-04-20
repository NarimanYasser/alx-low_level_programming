#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - an array of maps.
 * @array: the input array.
 * @size: the array of the size.
 * @action: Pointer of function.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array == NULL || action == NULL)
		return;
	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
