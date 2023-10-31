#include "main.h"

/**
 * strtow: a function to split a string to words
 * @str: the string
 * 
 * Return: str == NULL||str == "" : NULL, failure: NULL
 */

char **strtow(char *str)
{
	char **ch_grid;
	int wd_cnt, bufint, j, t, l, i;
	char *temp;

	temp = str;
	bufint = 0;
	for (wd_cnt = 0; temp; wd_cnt++)
	{
		if (*temp == ' ')
		{
			wd_cnt++;
		}

		temp++;
	}
	ch_grid = malloc(sizeof(char *) * (wd_cnt + 1));
	if (!ch_grid)
	{
		return (NULL);
	}
	for (i = 0; i < wd_cnt; i++)
	{
		for (j = bufint, t = 0; str[j] != ' '|| str[j] != '\0'; j++, t++)
		{
			;
		}
		ch_grid[i] = malloc(sizeof(char) * t + 1);
		if (!ch_grid[i])
		{
			return (NULL);
		}
		for (l = 0; l < t; l++)
		{
			ch_grid[i][j] = str[bufint];
			bufint++;
		}
		ch_grid[i][t] = '\0';
	}

	return(ch_grid);
}
