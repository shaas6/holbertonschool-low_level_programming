#include "holberton.h"

/**
 * set_bit - set bit value to 1
 * @index: where the bit at
 * @n: number
 * Return: 1 for good, -1 for bad
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int end = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	end <<= index, *n |= end;
	return (1);
}
