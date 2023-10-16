#include "main.h"

/**
 * puts2 - a function to print every other character of a line
 * starting with the first one and a new line next
 * @str: the string to be printed.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			_putchar('str[i]');
		}
		if (str[i + 1] == '\0')
		{
			break;
		}
		else
		{
			if (i != 0)
			{
				_putchar(str[i]);
				i++;
			}
		}
	}
}

