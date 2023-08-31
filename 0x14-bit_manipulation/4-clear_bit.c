#include "main.h"

/**
 * clear_bit - The function of sets the value of a bit to 0.
 * * @n: The pointer of an unsigned long int.
 * @index: The index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index >= sizeof(n) * 8)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
