#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Getting the last digit of this number
 *
 * Return: the last digit of the variable
 */
int print_last_digit(int n)
{
	int number;

	number = n % 10;
	if (number < 0)
	{
	number = (number * -1);
	}
	_putchar(number + '0');
	return (number);
}
