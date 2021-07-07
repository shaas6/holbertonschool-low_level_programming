#include "holberton.h"

/**
 * print_line - print '_' the number of times specified
 * @n: how many _ to print
 * Return: 0
 */
void print_line(int n)
{
	if (n > 0)
		for (; n > 0; n--)
			_putchar('_');
	_putchar('\n');
}
