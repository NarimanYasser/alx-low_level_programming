#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - the prints numbers of the functions.
 * @separator: input separator.
 * @n: number of integers to print in the function.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
		printf("%d", va_arg(ap, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	printf("\n");
	va_end(ap);
}
