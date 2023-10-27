#include <stdio.h>


/**
 * _putchar - a function to write a character to
 * stdout
 * @c: the character
 *
 * Return: returns 1 on success.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - a function to print out its name
 * @argc: the number of arguments in arg vector
 * @argv: the argument vector
 *
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	while (**argv != '\0')
	{
		_putchar(**argv);
	}
	_putchar('\n');

	return (0);
}

