#include "main.h"

/**
 * close_files - prints error
 * @pf1_err: error in closing pf1
 * @pf1: file descriptor
 * @pf2_err: error in closing pf2
 * @pf2: file descriptor
 */

void	close_files(int pf1_err, int pf1, int pf2_err, int pf2)
{
	if (pf1_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", pf1);
		exit(100);
	}
	if (pf2_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", pf2);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int	pf1, pf1_err, w = 0;
	int	pf2, pf2_err, r;
	char	buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	pf1 = open(argv[1], O_RDONLY);
	if (pf1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	pf2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (pf2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	while (w == 0)
	{
		r = read(pf1, buff, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
		w = write(pf2, buff, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}
	pf1_err = close(pf1);
	pf2_err = close(pf2);
	close_files(pf1_err, pf1, pf2_err, pf2);
	return (0);
}
