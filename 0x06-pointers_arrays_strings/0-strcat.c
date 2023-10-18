#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string to add the new string to
 * @src: the string that is to be added
 *
 * Return: a pointer to the new string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
