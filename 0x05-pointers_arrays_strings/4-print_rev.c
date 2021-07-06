#include "holberton.h"

/**
 * print_rev - reverses string
 * @s: string itself
 * Return: string reversed
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	i--;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
