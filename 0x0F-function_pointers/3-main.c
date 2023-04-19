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
	char	*oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	oper = argv[2];
	if ((*oper == '/' || *oper == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(oper) == NULL || oper[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(oper)(a, b));
	return (0);
}
