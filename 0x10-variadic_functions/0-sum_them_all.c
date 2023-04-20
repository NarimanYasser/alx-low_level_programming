#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all variable arguments.
 * @n: the amount of the arguments.
 *
 * Return: the sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;
	int sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
