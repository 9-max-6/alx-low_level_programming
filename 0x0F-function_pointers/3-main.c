#include "3-calc.h"

/**
 * main - main function
 * @argc: numbers of args
 * @argv: the arg vector
 *
 * Return: success ? answer, 0 : 98, 100
 */

int main (int argc, char **argv)
{
	int a, b, c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = (*get_op_func(argv[2]))(a, b);

	printf("%d\n", c);
	return (0);
}
