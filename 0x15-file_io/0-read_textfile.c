#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed
 * or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_letters, written_letters;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = (char *)malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	read_letters = read(fd, buf, letters);
	if (read_letters == -1)
	{
		free(buf);
		return (0);
	}
	written_letters = write(STDOUT_FILENO, buf, read_letters);
	if (written_letters == -1 || written_letters != read_letters)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (written_letters);
}
