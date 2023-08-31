#include "main.h"

/**
 * get_endianness - The function that checks the endianness
 *
 * Return: 0 if big endian, 1 if small endian.
 */

int get_endianness(void)
{
	unsigned int a;
	char *z;

	a = 1;
	z = (char *) &a;

	return ((int)*z);
}
