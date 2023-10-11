#include "search_algos.h"

/**
 * binary_Search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: Pointer to the first element of the array to search in.
 * @i: The starting index.
 * @j: The ending index.
 * @value: The value to search for.
 * Return: The index where value is located, -1 if value is not present
 * in array or if array is NULL.
 */

int	binary_Search(int *array, size_t i, size_t j, int value)
{
	size_t	mid, x;

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
			return (mid);
		if (array[mid] < value)
			i = mid + 1;
		else
			j = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The index where value is located, -1 if value is not present
 * in array or if array is NULL.
 */

int	exponential_search(int *array, size_t size, int value)
{
	size_t	i, min_index;

	if (array == NULL || size == 0)
		return (-1);
	i = 1;
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i < size - 1)
		min_index = i;
	else
		min_index = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, min_index);
	return (binary_Search(array, i / 2, min_index, value));
}
