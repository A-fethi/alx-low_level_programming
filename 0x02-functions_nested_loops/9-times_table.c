#include "main.h"

void	times_table(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		_putchar(i * i + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		i++;
	}
}

int main(void)
{
    times_table();
    return (0);
}
