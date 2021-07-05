#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: variable one
 * @b: variable two
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
