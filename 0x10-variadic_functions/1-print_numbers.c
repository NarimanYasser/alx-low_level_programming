#include "variadic_functions.h"

/**
 * print_numbers - the prints numbers of the functions.
 * @separator: input separator.
 * @n: number of integers to print in the function.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && a != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
