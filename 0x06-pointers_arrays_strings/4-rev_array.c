#include "main.h"

/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */

void	reverse_array(int *a, int n)
{
	int	*p1;
	int	*p2;
	int	tmp;

	p1 = a;
	p2 = a + n - 1;
	while (p1 < p2)
	{
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2--;
	}
}
