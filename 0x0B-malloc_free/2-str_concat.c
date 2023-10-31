#include "main.h"

/**
 * str_concat - a function to concatenate two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: sucess? pointer to the new string: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, j;
	unsigned int size;

	if (s2 == NULL && s1 != NULL))
	{
		return (s1)
	}
	if (s2 != NULL && s1 == NULL)
	{
		return (s1);
	}
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		;

	size = i;

	for (i = 0; s2[i] != '\0'; i++)
		;

	size += i;
	arr = malloc(sizeof(char) * (size + 1));

	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		arr[i] = s2[j];
		i++;
	}

	arr[i] = '\0';

	return (arr);
}


