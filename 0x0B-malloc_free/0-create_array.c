#include "main.h"

/**
 * create_array - creates array of chars initialized with a specific char
 * @size: the size of the array allocated
 * @c: the specific char
 * Return: NULL if array is 0, else pointer to the array
 */

char	*create_array(unsigned int size, char c)
{
	unsigned int	i;
	char		*array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
