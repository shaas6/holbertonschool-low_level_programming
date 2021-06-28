#include "holberton.h"

/**
 * print_alphabet_x10 - Prints an alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int number = 1;

	while (number <= 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		alphabet = 'a';
		number++;
	}
}
