#include "main.h"

/**
 * main - prints the minimun numbers of coins to make change money
 * @argc: argument count
 * @argv: argument
 * Return: 0, 1
 */

int main(int argc, char *argv[])
{
	int	cents;
	int	coins[] = {25, 10, 5, 2, 1};
	int	coins_num;
	int	i;
	int	count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins_num = sizeof(coins) / sizeof(int);
	i = 0;
	count = 0;
	while (i < coins_num)
	{
		while (cents >= coins[i])
		{
			cents = cents - coins[i];
			count++;
		}
		i++;
	}
	printf("%d\n", count);
	return (0);
}
