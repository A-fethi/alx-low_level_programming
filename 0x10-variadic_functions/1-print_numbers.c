#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	int		value;
	va_list		args;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		value = va_arg(args, int);
		printf("%d", value);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
