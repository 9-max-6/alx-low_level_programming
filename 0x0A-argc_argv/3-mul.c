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
 * main - a function to multiply two numbers.
 * @argc: argv.len()
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (_atoi(argv[1]) * _atoi(argv[2])));
	return (0);
}
