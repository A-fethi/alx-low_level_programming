#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array to search in
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: -1 if size less than or equal 0 and if no element matches,
 * index of the first element for which the cmp function does not return 0
 */

int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	i = 0;
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	while (i < size)
	{
		if (((*cmp)(array[i])) != 0)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
