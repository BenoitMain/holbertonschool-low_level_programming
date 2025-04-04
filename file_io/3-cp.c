#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * copy_file - Copies the content of one file to another.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 *
 * Return: 0 on success, or exits with a status code on failure.
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t var_read, var_write;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((var_read = read(fd_from, buffer, 1024)) > 0)
	{
		var_write = write(fd_to, buffer, var_read);
		if (var_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (var_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		exit(98);
	}
	close(fd_from);
	close(fd_to);
	return (0);
}
/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or exits with a status code on failure.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	result = copy_file(argv[1], argv[2]);
	if (result != 0)
	{
		exit(result);
	}
	return (0);
}
