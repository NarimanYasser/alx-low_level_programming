#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all variable arguments.
 * @n: the amount of the arguments.
 *
 * Return: the sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
