#include "holberton.h"

/**
 * create_file - does what it says
 * @filename: name of created file
 * @text_content: string to write to the file
 * Return: 1 for good, -1 for bad
 */
int create_file(const char *filename, char *text_content)
{
	int x, result, length = 0;

	if (!filename)
		return (-1);
	if (text_content)
		while (text_content[length])
			length++;
	x = open(filename, O_WRONLY | O_TRUNC);
	if (x < 0)
	{
		x = open(filename, O_WRONLY | O_CREAT, 0600);
		if (x < 0)
			return (-1);
		result = write(x, text_content, length);
		if (result < 0)
			return (-1);
	}
	else
	{
		result = write(x, text_content, length);
		if (result < 0)
			return (-1);
	}
	close(x);
	return (1);
}
