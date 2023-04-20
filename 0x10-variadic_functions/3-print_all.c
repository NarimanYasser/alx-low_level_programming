#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - the function prints all anything.
 * @format: the format to print.
 *
 * Return: it returns nothing.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *string;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			string = va_arg(ap, char *);
			if (string == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
