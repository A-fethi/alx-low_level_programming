#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number
 * @m: also number :p
 * Return:  returns the number of bits you would need to flip
 * to get from one number to another.
 */

unsigned int	flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int	i;
	unsigned long	num = n ^ m;

	i = 0;
	while (num)
	{
		num = num & (num - 1); /* Brian Kernighan's Algorithm
					* see the explanation file
					*/
		i++;
	}
	return (i);
}
