#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: text to add to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written_bytes;
	written_bytes = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	written_bytes = write(fd, text_content, strlen(text_content));
	if (written_bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
