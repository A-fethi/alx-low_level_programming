#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The index where value is located, -1 if value is not present
 * in array or if array is NULL.
 */

int	binary_search(int *array, size_t size, int value)
{
	size_t	i, j, mid, x;

	i = 0;
	j = size - 1;
	if (array == NULL)
	{
		return (-1);
	}
	while (i <= j)
	{
		mid = i + (j - i) / 2;
		printf("Searching in array:");
		x = i;
		while (x <= j)
		{
			printf(" %d", array[x]);
			if (x < j)
				printf(",");
			x++;
		}
		printf("\n");
		if (array[mid] == value)
			return (i);
		if (array[mid] < value)
			i = mid + 1;
		else
			j = mid - 1;
	}
	return (-1);
}
