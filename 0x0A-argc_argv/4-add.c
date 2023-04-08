#include "main.h"

/**
 * my_isdigit - checks for a digit
 * @c: char to check
 * Return: 1 if true or 0 if false.
 */

int my_isdigit(char c)
{
	return (c >= '0' && c <= '9');
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
			if (!my_isdigit(*argv[i]))
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
