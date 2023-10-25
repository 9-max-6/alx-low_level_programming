#include "main.h"

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - a function to determine
 * the square root of n
 * @n: the number
 *
 * Return: if the number doesn't have a natural
 * square root: -1 : the square root
 */

int _sqrt_recursion(int n);
{
	if (n < 0)
	{
		return (-1);
	}

	return(_sqrt_helper(int n, 1));
}

/**
 * _sqrt_helper - works with sqrt recursion to get
 * sqrt of natural number.
 * @n: number
 * @i: maximum value.
 *
 * Return: the square root
 */

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}
