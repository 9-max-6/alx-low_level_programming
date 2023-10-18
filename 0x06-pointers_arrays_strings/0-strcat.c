#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: the function returns a pointer to the resulting
 * string.
 */

char *_strcat(char *dest, char *src)
{
	int ind, ine;

	if (!dest || !src)
	{
		return (NULL);
	}

	for (ind = 0; dest[ind] != '\0'; ind++)
	{
		;
	}
	ind++;

	if (dest[ind] == '\0')
	{
		for (ine = 0; src[ine] != '\0'; ine++, ind++)
		{
			dest[ind] = src[ine];
		}
		ind++;
		dest[ind] = '\0';

		return (dest);
	}
	return (NULL);
}


