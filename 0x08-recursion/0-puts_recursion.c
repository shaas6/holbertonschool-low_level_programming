#include "holberton.h"

/**
 * _puts_recursion - recursively prints a string using putchar
 * @s: string being printed
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
