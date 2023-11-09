#include "3-calc.h"
/**
 * op_add - a function to add two integers.
 * @a: int
 * @b: int
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function to sub two integers.
 * @a: int
 * @b: int
 *
 * Return: sub of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function to mul two integers.
 * @a: int
 * @b: int
 *
 * Return: mul of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function to div two integers.
 * @a: int
 * @b: int
 *
 * Return: div of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function to mod two integers.
 * @a: int
 * @b: int
 *
 * Return: mod of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

