#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: long integer
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int	get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
