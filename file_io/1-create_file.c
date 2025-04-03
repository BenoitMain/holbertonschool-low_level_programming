#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * _strlength - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlength(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
/**
 * create_file - Creates a file and writes text content into it.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write into the file.
 *
 * Return: 1 on success, -1 on failure (e.g., if filename is NULL,
 *         or if the file cannot be created or written).
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length_text;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		length_text = write(fd, text_content, _strlength(text_content));
		if (length_text == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
