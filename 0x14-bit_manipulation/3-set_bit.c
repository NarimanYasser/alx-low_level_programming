#include "main.h"

/**
 * set_bit - The function sets the value of a bit to 1.
 *
 * @n: pointer of an unsigned long int.
 *
 * @index: The index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index >= sizeof(n) * 8)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
