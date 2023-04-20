#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - the function of the searches for an integer.
 * @array: the input array.
 * @size: the size of the array.
 * @cmp: Pointer to function.
 *
 * Return: the integer index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if ((cmp(array[a])) == 1)
		{
			return (a);
		}
	}
	return (-1);
}
