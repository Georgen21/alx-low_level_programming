#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two number
 * @a: The first number
 * @b: The second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference from two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two number
 * @a: The first number
 * @b: The second number
 *
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: Quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The remainder or division of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: Remainder of division of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
