#include "holberton.h"

/**
 * factorial - function that gives the factorial of a given number
 *
 * @n: a number to be used for the function
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
