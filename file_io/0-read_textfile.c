#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - Reads text file and prints it to the POSIX standard output.
 * @filename: Pointer to the name of the file to be read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print,
 *         or 0 if the file cannot be opened, read, or memory allocation fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
ssize_t var_write, var_read;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	var_read = read(fd, buffer, letters);
	if (var_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	var_write = write(STDOUT_FILENO, buffer, var_read);
	if (var_write == -1 || var_write != var_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (var_write);
}
