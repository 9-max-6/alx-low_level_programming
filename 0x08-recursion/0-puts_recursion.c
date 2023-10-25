#include "main.h"

/**
 * _puts_recursion - a function to print a string followed
 * by a new line using recursion.
 *
 * @s: the pointer to the string.
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

