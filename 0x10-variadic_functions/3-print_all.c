#include "variadic_functions.h"

/**
 * print_all - a function to print anything.
 * @format: list of types of arguments.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;

	va_start(args, format);
	i = 0;
	while (format[i])
	{

