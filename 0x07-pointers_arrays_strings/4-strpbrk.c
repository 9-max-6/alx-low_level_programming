#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Finds the first occurrence of any
 * character from 'accept' in the string 's'.
 * @s: The string to search.
 * @accept: The string containing characters to look for.
 *
 * Return: A pointer to the byte in 's' that matches
 * any byte from 'accept', or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
