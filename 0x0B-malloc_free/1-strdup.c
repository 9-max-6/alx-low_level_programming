#include "main.h"

/**
 * _strdup - new memory, same string
 * @str: the string
 *
 * Return: sucess pointer to said string: NULL
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;

	arr = malloc(sizeof(char) * i);
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}
