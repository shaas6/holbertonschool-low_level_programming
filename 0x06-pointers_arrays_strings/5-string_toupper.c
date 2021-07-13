#include "holberton.h"

/**
 * string_toupper - Lowercase to uppercase function
 * @lower: string for a-z
 * Return: letter in uppercase
 */
char *string_toupper(char *lower)
{
	int a;

	for (a = 0; lower[a] != '\0'; a++)
	{
		if (lower[a] >= 'a' && lower[a] <= 'z')
		{
			lower[a] -= 32;
		}
	}
	return (string);
}
