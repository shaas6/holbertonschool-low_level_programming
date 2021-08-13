#include "holberton.h"

/**
 * clear_bit - clears the bit
 * @n: number
 * @index: where the bit is
 * Return: 1 for good, -1 for bad
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int end = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	end <<= index, *n &= ~end;
	return (1);
}
