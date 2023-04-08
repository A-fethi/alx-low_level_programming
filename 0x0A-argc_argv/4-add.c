#include "main.h"

/**
 * _isdigit - a function that check for a digit (0 -> 9)
 * @str: to check
 * Return: 0 or 1
 */

int	_isdigit(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers.
 * @argc: arguments count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int	i;
	int	sum;

	i = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if (!_isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
