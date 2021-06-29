#include "holberton.h"

/**
 * _islower - Checks for lowercase character
 *@c: letter checked
 *
 * Return: Return 1 or 0
 */
int _islower(int c)
{
	int lowercase;
	int out;

	out = 0;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (c == lowercase)
		out = 1;
	}
	return (out);
}
