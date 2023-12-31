#include "main.h"

/**
 * _atoi - function to convert string to integer
 * @s: pointer to the string to be converted
 *
 * Return: return the  new integer value
 */

int _atoi(char *s)
{
	int sign, result, i;

	sign = 1;
	result = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result = result * 10 + (s[i] - '0');
				i++;
			}
			break;
		}
		else
		{
			i++;
		}
	}

	return (sign * result);
}
/**
 * is_num - a function to check if each character of
 * a string is a digit.
 * @s: the string
 *
 * Return: returns 0 if okay: -1 if not
 */

int is_num(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > '9' || s[i] < '0')
		{
			return (-1);
		}
	}

	return (0);
}
/**
 * main - print arg vector
 * @argc: length of argv
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum, temp;
	
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (is_num(argv[i]) == -1)
		{
			printf("Error\n");
			return (0);
		}
	}
	
	for (i = 1; i < argc; i++)
	{
		temp = _atoi(argv[i]);
		if (temp >= 0)
		{
			sum += temp;
		}
	}
	printf("%d\n", sum);
	return (0);
}
