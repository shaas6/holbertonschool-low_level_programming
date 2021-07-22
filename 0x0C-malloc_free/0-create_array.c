#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *create_array - creates an array of chars, initializes with specific char
 * @size: array size
 * @c: char of choosing to initialize with
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	if (size == 0)
		return (NULL);
	str = malloc((size) * (sizeof(char)));
	if (str == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
