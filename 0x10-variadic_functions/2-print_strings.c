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
	va_list ap;
	unsigned int a;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		char *str;

		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && (a + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
