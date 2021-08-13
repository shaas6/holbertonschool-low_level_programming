#include "holberton.h"

/**
 * binary_to_uint - converts binary # to unsigned int
 * @b: binary #
 * Return: converted # or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, end = 0, base = 1;
	int z;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	for (z = length - 1; z >= 0; z--)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
		if (b[z] == '1')
			end += base;
		base = base * 2;
	}
	return (end);
}
