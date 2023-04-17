#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print the name of the file it was compiled from
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
