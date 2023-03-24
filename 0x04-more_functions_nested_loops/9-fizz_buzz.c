#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on Succes.
 */

int main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);
		
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
