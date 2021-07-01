#include "holberton.h"

/**
 * _isupper - Checks for lowercase character
 *@c: letter checked
 *
 * Return: Return 1 or 0
 */
int _isupper(int c)
{
	int uppercase;
	int out;

	out = 0;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		out = 1;
	}
	return (out);
}
