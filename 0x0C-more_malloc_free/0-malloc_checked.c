#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 * Return: pointer to allocated memory
 */

void	*malloc_checked(unsigned int b)
{
	unsigned int	*space;

	space = malloc(b * sizeof(unsigned int));
	if (!space)
		exit(98);
	return (space);
}
