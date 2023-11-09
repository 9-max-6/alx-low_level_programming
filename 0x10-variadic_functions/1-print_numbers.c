#include "variadic_functions.h"

/**
 * print_numbers - a function to print numbers
 * @separator: the string to be printed between numbers.
 * @n: is the number of integers passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
		if (i == (n - 1))
			printf("\n");
	}
}
