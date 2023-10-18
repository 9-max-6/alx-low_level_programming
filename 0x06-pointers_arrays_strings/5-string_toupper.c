#include "main.h"

/**
 * string_toupper - a function to change all lowercase
 * letters of a string to uppercase.
 * @ptr: pointer to the string.
 * Return: a pointer to the string.
 */

char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if ((int)ptr[i] >= 97 && ((int)ptr[i] <= 122))
		{
			ptr[i] -= 32;
		}
	}

	return (ptr);
}
