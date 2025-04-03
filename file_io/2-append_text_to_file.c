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
int _strlength(const char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to append to.
 * @text_content: NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 *         If filename is NULL, return -1.
 *         If text_content is NULL, do not add anything, return 1.
 *         If the file does not exist or cannot be written, return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length_text;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND );
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
