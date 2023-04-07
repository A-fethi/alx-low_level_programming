#include "main.h"

/**
 * _isdigit - a function that check for a digit (0 -> 9)
 * @c: char to check
 * Return: 0 or 1
 */

int	_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
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
		printf("%d\n", 0);
		return (0);
	}
	while (i < argc)
	{
		if (!_isdigit(*argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
