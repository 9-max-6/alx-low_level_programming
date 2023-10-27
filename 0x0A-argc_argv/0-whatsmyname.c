#include <stdio.h>
#include <unistd.h>

/**
 * main - a function to print out its name
 * @argc: the number of arguments in arg vector
 * @argv: the argument vector
 *
 * Return: returns 0
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

