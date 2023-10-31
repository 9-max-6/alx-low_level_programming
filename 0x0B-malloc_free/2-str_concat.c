#include "main.h"

/**
 * _strlen - a function determine the length of a string
 * @str: pointer to the string.
 * 
 * Return: returns the length of the string or NULL
 */

int _strlen(char *str)
{
	int j; 

	if (!str)
	{
		return (0);
	}
	for (j = 0; str[j] != '\0'; j++)
		;

	return (j);
}
/**
 * sing_str - a function to duplicate single string
 * @str: the string to be duped.
 * Return: pointer to the string.
 */

char *sing_str(char *str)
{
	int j, i;
	char *new_str;

	j = _strlen(str);
	new_str =  malloc(sizeof(char) * (j + 1));
	
	for (i = 0; i < j; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}	

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

	if (s2 == NULL && s1 != NULL)
	{
		return (sing_str(s1));
	}
	if (s2 != NULL && s1 == NULL)
	{
		return (sing_str(s2));
	}
	if (s1 == NULL && s2 == NULL)
	{
		arr = malloc(1);
		arr = '\0';
		return arr;
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


