#include "variadic_functions.h"

/**
 * print_strings - the function of prints strings.
 * @separator: the string to be printed.
 * @n: number of strings.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	va_start(ap, n);
	while (i--)
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	printf("\n");
	va_end(ap);
}
