#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  main - check the codes for the school students.
 * @argc: the argument count.
 * @argv: the argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(a, b));
	return (0);
}
