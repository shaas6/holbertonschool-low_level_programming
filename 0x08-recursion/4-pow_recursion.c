#include "holberton.h"

/**
 * _pow_recursion - returns x raised to the power y
 * @x: an integer being raised to the power of y
 * @y: integer
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
