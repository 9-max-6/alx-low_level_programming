#include "main.h"

/**
 * _strpbrk - a function to search a string for any of 
 * a set of bytes
 *
 * @s: the string.
 * @accept: the substring to be searched.
 *
 * Return: returnsa pointer to the byte in s that matches
 * one of the byes in accept or nULL if no such 
 * bytes is found. 
 */

char *_strpbrk(char *s, char *accept)
{


	itn i, j;

	for ( i = 0; accept[j] != '\0'; j++)
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (*s ==  accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}

return (NULL);


}

