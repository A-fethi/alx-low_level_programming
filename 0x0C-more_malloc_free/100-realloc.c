#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: allocated space for ptr size
 * @new_size: new memory block size
 * Return: pointer to the new memory block
 */


void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int	i;
	char		*space;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		space = malloc(new_size);
		if (!space)
			return (NULL);
		return (space);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	space = malloc(new_size);
	if (!new_size)
		return (NULL);
	i = 0;
	while (i < new_size && i < old_size)
	{
		space[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (space);
}
