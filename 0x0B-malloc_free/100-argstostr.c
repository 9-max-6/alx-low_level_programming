#include "main.h"

/**
 * argstostr - a function to concatenate all the
 * arguments of the program
 * @ac: the arguments count
 * @av: point to the vector of arguments.
 *
 * Return: success? Pointer to new string: NULL
 */

char *argstostr(int ac, char **avgit a)
{
	int i, j, len, bufint;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = bufint = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			;
		}
		len += j;
	}
	len += i;
	str = malloc(sizeof(char) * len);
	if (!str)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[j] != '\0'; j++)
		{
			str[bufint] = av[j];
			bufint++;
		}
		str[bufint] = '\n';
	}
	str[bufint] = '\0';

	return (str);
}


			

