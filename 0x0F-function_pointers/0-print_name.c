#include "function_pointers.h"

/**
 * print_name - a function to print a name
 * @name: the name to be printed
 * @f: the function to be invoked.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
