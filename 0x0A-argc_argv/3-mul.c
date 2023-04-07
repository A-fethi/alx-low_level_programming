#include "main.h"

/**
 * main - multiplies 2 numbers
 * @argc: arguments count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int	mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
