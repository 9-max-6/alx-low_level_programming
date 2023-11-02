#include "main.h"

/**
 * _strlen - determne string length
 * @ptr: string
 * Return: size of the string
 */

int _strlen(char *ptr)
{
	int n;

	for (n = 0; ptr[n] != '\0'; n++)
		;
	return (n);
}

/**
 * string_nconcat - a function to perform mem magic.
 * @s1: the first string
 * @s2: the second string.
 * @n: number of bytes.
 *
 * Return: if success? pointer : NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int num, i, j, num1;
	char *str;

	if (!s2 || !s2 || n == 0)
	{
		return (NULL);
	}
	num = (_strlen(s1) + 1);
	num1 = (_strlen(s2) + 1);

	if (n < num1)
		str = malloc(sizeof(char) * num);
	else
		str = malloc(sizeo(char) * (num1 + num + 1));
	
	if (!str)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; i < (num + n) && s2[j] != '\0'; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
