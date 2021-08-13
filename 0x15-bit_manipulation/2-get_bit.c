#include "holberton.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: variable for input
 * @index: index of bit
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= sizeof(unsigned long int) * 8)
		return (1 & (n >> index));
	return (-1);
}
