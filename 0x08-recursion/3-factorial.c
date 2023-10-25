#include "main.h"

/**
 * factorial - a function to determine the factorial of a
 * integer value
 * @n: the value
 *
 * Return: if n is lower than 0, return -1 to error
 * and factorial of 0 is 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
