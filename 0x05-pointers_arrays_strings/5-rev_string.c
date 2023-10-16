#include "main.h"

/**
 * rev_string - a function to print a string in reverse.
 *
 * @s: pointer to the string.
 */

void rev_string(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{	
		i++;
	}
	for (j = 0; s[j] != '\0'; j++)
	{
		s[j] = s[i];
		i--;
	}

}

