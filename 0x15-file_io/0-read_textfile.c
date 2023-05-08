#include "main.h"

/**
 * read_textfile - reads the file and prints it to the POSIX standard output
 * @filename: file pointer variable
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t	read_textfile(const char *filename, size_t letters)
{
	int	fd;
	int	r;
	int	w;
	char	*buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
		return (0);
	free(buffer);
	close(fd);
	return (w);
}
