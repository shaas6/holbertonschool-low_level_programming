#include "holberton.h"

/**
 * square_root - helps find the square root of n
 * @a: Number to find the square root of
 * @square: The square root
 * Return: Square root
 */
int square_root(int a, int square)
{
	if (square * square == a)
	{
		return (square);
	}
	if (square * square > a)
	{
		return (-1);
	}
	return (square_root(a, square + 1));
}

/**
 * _sqrt_recursion - Find the square root of n
 * @n: The value of the function
 * Return: Return -1 if n does not have a square root
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 0));
}
