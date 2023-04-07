#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: arguments count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int	i;
	int		sum;

	i = 1;
	sum = 0;
	if (argc == 1)
		printf("%d\n", 0);
	if (argc > 1)
	{
		while (i < argc)
		{
			if (!isdigit(*argv[i]))
			{
				printf("%s\n", "Error");
				return (1);
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
