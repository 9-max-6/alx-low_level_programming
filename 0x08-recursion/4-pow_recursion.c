#include "main.h"

/**
 * _pow_recursion - raises to a power
 * @x: the base
 * @y: the index
 *
 * Return: y lower than 0: -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, --y));
}
