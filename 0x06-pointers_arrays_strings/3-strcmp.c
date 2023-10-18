#include "main.h"

/**
 * _strcmp - a function to compare two strings.
 * @s1: the first string
 * @s2: the second string.
 *
 * Return: difference in size
 */

int _strcmp(char *s1, char *s2)
{
	int j, sum;

	sum = 0;
	for (j = 0; s1[j] != '\0' && s2[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
		{
			sum = s1[j] - s2[j];
			return (sum);
		}
	}
	if (s1[j] == '\0' && s2[j] == '\0')
	{
		return (0);
	}
	else if (s1[j] == '\0' && s2[j] != '\0')
	{
		sum = s2[j];
		return (sum * -1);
	}
	else
	{
		sum = s1[j];
		return (sum);
	}

}

