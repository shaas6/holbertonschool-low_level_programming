#include "holberton.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to append
 * Return: 1 for good, -1 for bad
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, result, length = 0;

	if (!filename)
		return (-1);
	if (text_content)
		while (text_content[length])
			length++;
	x = open(filename, O_WRONLY | O_APPEND);
	if (x < 0)
		return (-1);
	result = write(x, text_content, length);
	if (result < 0)
		return (-1);
	close(x);
	return (1);
}
