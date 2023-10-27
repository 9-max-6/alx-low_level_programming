#include <stdio.h>
#include <unistd.h>

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

int main(__attribute__((unused))int argc, char *argv[])
{

	int i;
	i = 0;
	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
		
	}
	_putchar('\n');

	return (0);
}

