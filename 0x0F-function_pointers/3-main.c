#include "3-calc.h"


/**
 * main - prints the result of an operation
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int	a;
	int	b;
	int	result;
	int	(*op_f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	op_f = get_op_func(argv[2]);
	if (op_f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op_f(a, b);
	printf("%d\n", result);
	return (0);
}
