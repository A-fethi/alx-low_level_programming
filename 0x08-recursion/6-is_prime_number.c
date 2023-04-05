#include "main.h"

/**
 * _if - checks if the number modulu equal to 0
 * @number: the number
 * Return: 0 if number modulu equal to 0, 1 if not.
 */

int	_if(int number)
{
	int i;

	i = 2;
	if (number % i == 0)
		return (0);
	return (1);
}

/**
 * is_prime_number - check if n is prime or not
 * @n: the number
 * Return: 0 if is not prime, 1 if it is.
 */

int	is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_if(n));
}
