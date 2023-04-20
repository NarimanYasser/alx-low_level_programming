#include "3-calc.h"

/**
 * op_add - sum two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: result of the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: result of the sudctracts.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: result of the multiplication.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: result of the division.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - module of two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: result of the modulation.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
