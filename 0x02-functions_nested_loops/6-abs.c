#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @x: absolute value of this number being computed
 *
 * Return: Absolute value of x
 */
int _abs(int x)
{
	if (x < 0)
	{
	x = (x * -1);
	}
	return (x);
}
