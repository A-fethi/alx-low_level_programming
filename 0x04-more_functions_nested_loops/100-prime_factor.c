#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: always 0
 **/

int main(void)
{
	long int	num;
	int		largest;
	int		odd;

	largest = 0;
	odd = 3;
	num = 612852475143;
	while (num % 2 == 0)
	{
		largest = 2;
		num = num / 2;
	}
	while (num != 1)
	{
		while (num % odd == 0)
		{
			largest = odd;
			num = num / odd;
		}
		odd = odd + 2;
	}
	printf("%d\n", largest);
	return (0);
}
