#include "main.h"

/**
 * print_array - prints n element of an array of integers
 * @a: int to check
 * @n: int to check
 */

void	print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
