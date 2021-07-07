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
/**
 * _strlen - returns the length of a string
 * @s: string being checked
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int num;

	num = 0;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	return (num);
}
