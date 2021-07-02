#include "holberton.h"

/**
 * print_numbers - prints 0-9 followed by a newline
 * @x - variable being printed
 * _putchar - command to print a variable
 * Return: void
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
