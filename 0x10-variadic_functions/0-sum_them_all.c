#include "variadic_functions.h"

/**
 * sum_them_all - a function to sum all of its
 * parameters
 * @n: the number of arguments after n
 *
 * Return: returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0, sum = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
