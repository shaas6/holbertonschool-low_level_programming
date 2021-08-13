#include "holberton.h"

/**
 * print_binary - prints a number in binary
 * @n: variable for input
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		_putchar(1 + '0');
		return;
	}
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
