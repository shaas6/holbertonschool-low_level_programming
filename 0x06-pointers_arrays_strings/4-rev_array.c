#include "holberton.h"

/**
 * reverse_array - reverses contents of an array
 * @a: array being reversed
 * @n: an int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int position, temp, result;

	position = 0;
	result = n - 1;

	while (position <= result)
	{
		temp = a[position];
		a[position] = a[result];
		a[result] = temp;
		position++;
		result--;
	}
}
