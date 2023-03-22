#include "main.h"

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int	i;
	unsigned long first;
	unsigned long second;
	unsigned long next;

	i = 1;
	first = 0;
	second = 1;
	while (i <= 50)
	{
		next = first + second;
		printf("%ld", next);
		first = second;
		second = next;
		if (i == 50)
			printf("\n");
		else
			printf(", ");
		i++;
	}
	return (0);
}
