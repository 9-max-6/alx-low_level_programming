#include "variadic_functions.h"

/**
 * print_strings - a function to print strings
 * @separator: the string to be printed between strings.
 * @n: is the number of strings passed
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
		if (i == (n - 1))
			printf("\n");
	}
}
