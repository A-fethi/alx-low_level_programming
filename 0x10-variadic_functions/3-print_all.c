#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void	print_all(const char * const format, ...)
{
	int	i;
	char	*s;
	char	*sep;
	va_list	args;

	i = 0;
	sep = "";
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(args, int));
		}
		else if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(args, int));
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (!s)
				s = "(nil)";
			printf("%s%s", sep, s);
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(args, double));
		}
		else
		{
			/* ignore all others char */
		}
		sep = ", ";
		i++;
	}
	printf("\n");
}
