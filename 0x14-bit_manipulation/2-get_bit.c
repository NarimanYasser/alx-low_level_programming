#include "main.h"

/**
 * get_bit - The function that returns the value of a bit at a given index.
 *
 * @n: The number unsigned long int input.
 * @index: The index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);


	return (n >> index & 1);
}
