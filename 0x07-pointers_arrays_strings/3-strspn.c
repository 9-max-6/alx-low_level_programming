#include "main.h"

/**
 * _strspn - Finds the length of the initial
 * segment of 's' with characters in 'accept'.
 * @s: The string to evaluate.
 * @accept: The string of characters to match.
 *
 * Return: Number of bytes in the initial segment
 * of 's' with characters only from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
