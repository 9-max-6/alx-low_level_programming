#include "main.h"

/**
 * _strchr - a function to locate a character in a string.
 *
 * @s: a pointer to the string.
 * @c: the character to be loctated.
 *
 * Return: NUll f not found or pointer to the character.
 */

 char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	if (!s)
	{
		return (NULL);
	}

	while (s[i] != c)
	{
		i++;
	}
	if (s[i] == '\0')
	{
		return (NULL);
	}
	else
		return (s + i);
}


