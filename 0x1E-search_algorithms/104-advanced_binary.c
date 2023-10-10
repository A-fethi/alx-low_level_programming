#include "search_algos.h"

/**
 * binary_recursive - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: Pointer to the first element of the array to search in.
 * @i: The starting index of the [sub]array to search.
 * @j: The ending index of the [sub]array to search.
 * @value: The value to search for.
 * Return: The index where value is located, -1 if value is not present
 * in array or if array is NULL.
 */

int	binary_recursive(int *array, size_t i, size_t j, int value)
{
	size_t	mid, x;

	if (j < i)
		return (-1);
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
	if (array[mid] == value && (mid == i || array[mid - 1] != value))
		return (mid);
	if (array[mid] < value)
		return (binary_recursive(array, mid + 1, j, value));
	return (binary_recursive(array, i, mid, value));
}


/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The index where value is located, -1 if value is not present
 * in array or if array is NULL.
 */

int	advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}
