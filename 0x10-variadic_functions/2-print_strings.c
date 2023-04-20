#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of integers passed to the function
 */

void	print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	char		*value;
	va_list		args;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		value = va_arg(args, char *);
		if (value == NULL)
			printf("(nil)");
		else
			printf("%s", value);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
