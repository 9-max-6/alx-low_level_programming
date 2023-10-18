#include "main.h"

/**
 * cap_string - a function to capitalize all words of
 * a string.
 * @ptr: pointer to the string
 *
 * Return: returns a pointer to the new string
 */

char *cap_string(char *ptr)
{
	int j;

	for (j = 0; ptr[j] != '\0'; j++)
	{
		if (ptr[j] >= 'a' && ptr[j] <= 'z' && j == 0)
		{
			ptr[j] -= 32;
		}
		if (is_seperator(ptr[j]))
		{
			if (ptr[j + 1] >= 'a' && ptr[j] <= 'z')
			{
				ptr[j + 1] -= 32;
			}
		}
	}
	return (ptr);
}

/**
 * is_separator - a function to check if a character is a seperator
 * @ch: character
 *
 * Return: return 0 if not else 1
 */

int is_seperator(char ch)
{
	int i;

	char sep[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (ch == sep[i])
		{
			return (1);
		}
	}
	return (0);
}

