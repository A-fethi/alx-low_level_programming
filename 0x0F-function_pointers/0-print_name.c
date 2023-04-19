#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: pointer to function
 */

void	print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	(*f)(name);
}
