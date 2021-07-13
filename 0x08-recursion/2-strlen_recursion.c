#include "holberton.h"

/**
 * _strlen_recursion - function counting a string's length with recursion
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s++)
	{
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
