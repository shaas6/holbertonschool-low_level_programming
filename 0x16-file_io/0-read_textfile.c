#include "holberton.h"

/**
 * read_textfile - reads text file, prints to POSIX stdout
 * @filename: file's name
 * @letters: # of chars to read
 * Return: max chars to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int x, count, result;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	x = open(filename, O_RDONLY);
	if (x < 0)
		return (0);
	count = read(x, buffer, letters);
	if (count < 0)
		return (0);
	buffer[count] = '\0';
	result = write(STDOUT_FILENO, buffer, count);

	if (result < 0)
		return (0);
	close(x);
	return (result);
}
