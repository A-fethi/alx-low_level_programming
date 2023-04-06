#include "main.h"

/**
 * main - prints its name,followed by new line.
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
		break;
	}
	return (0);
}
