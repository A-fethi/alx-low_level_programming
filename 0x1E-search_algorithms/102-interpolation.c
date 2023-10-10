#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, -1 if value is
 * not present in array or if array is NULL.
 */

int	interpolation_search(int *array, size_t size, int value)
{
	size_t	pos, high, low;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (low < high)
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
