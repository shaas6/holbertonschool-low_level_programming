#include "holberton.h"

/**
 * puts2 - reverses string
 * @str: string itself
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
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
