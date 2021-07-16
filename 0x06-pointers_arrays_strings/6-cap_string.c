#include "holberton.h"

/**
 * cap_string - first char caps
 * @a: string
 * Return: string
 */
char *cap_string(char *a)
{
	int i = 0;
	int x = 0;
	int sym[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}'};

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
