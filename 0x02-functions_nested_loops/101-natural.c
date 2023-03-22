#include "main.h"

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 (Success)
 */

int	main(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j = j + 1;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
