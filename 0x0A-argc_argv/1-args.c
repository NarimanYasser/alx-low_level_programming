#include <stdio.h>

/**
 * main - Entry point
 * @argc: integer value counting the number of arguments
 * @argv: array of strings
 * Return: it returns 0 if the program compiles ok
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
