#include "3-calc.h"

/**
 * get_op_func: function to call the right function.
 * @s: operator passed as an argument to the program.
 *
 * Return: success ? pointer to func : NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"*", op_mul},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;


	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			if (ops[i].f == NULL)
			{
			       return (NULL);
			}
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
