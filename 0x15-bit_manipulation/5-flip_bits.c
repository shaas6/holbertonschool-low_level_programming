#include "holberton.h"

/**
 * flip_bits - returns # of bits to flip n to m
 * @n: number
 * @m: another number
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int end = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			end++;
		m = m >> 1;
		n = n >> 1;
	}
	return (end);
}
