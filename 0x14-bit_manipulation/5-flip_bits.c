#include "main.h"

/**
 * flip_bits - The function returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: The number one.
 * @m: The number two.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;
	unsigned long int b = n ^ m;

	while (b)
	{
		if (b & 1ul)
			a++;
		b = b >> 1;
	}

	return (a);
}
