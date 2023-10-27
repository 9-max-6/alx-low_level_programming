#include "main.h"

/**
 * main - print number of arguments
 *
 * @argc: len(argv)
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", --argc);
	return (0);
}
