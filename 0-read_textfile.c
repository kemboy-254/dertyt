#include "main.h"

/**
 * read_textfile- Reads a text file and prints it
 *	to the POSIX standard output
 * @filename: the path of the file to be read
 * @letters: no of letters it should
 *	read and write
 *
 * Return: actual no it could r&w
 *	0 if filename is null
 *	0 if cant be opened and written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	char *c = malloc(sizeof(char) * letters);

	if (c == NULL)
		return (0);

	ssize_t fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(c);
		return (0);
	}

	ssize_t r = read(fd, c, letters);

	if (r == -1)
	{
		free(c);
		return (0);
	}

	ssize_t w = write(1, c, r);

	if (w == -1 || w != r)
	{
		free(c);
		return (0);
	}
	free(c);
	close(fd);

	return (w);
}
