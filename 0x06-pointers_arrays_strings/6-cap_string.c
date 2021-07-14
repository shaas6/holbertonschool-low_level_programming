#include "holberton.h"

/**
 * cap_string - make the first letter of every word capital
 * @a: string being read
 * Return: string with capitals
 */
char *cap_string(char *a)
{
	int i = 0;
	int x = 0;
	int sym[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			for (x = 0; x < 14; x++)
			{
				if (a[i - 1] == sym[x])
				{
					a[i] = a[i] - 32;
				}
			}
		}
		i++;
	}
	return (a);
}
