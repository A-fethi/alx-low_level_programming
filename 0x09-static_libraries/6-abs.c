#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @i: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */

int	_abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
	return (0);
}
