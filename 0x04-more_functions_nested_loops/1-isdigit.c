#include "holberton.h"

/**
 * _isdigit - Checks if character is a digit 0-9
 *@c: character checked
 *
 * Return: Return 1 or 0
 */
int _isdigit(int c)
{
	int num, result;

	result = 0;
	for (num = '0'; num <= '9'; num++)
	{
		if (num == c)
		result = 1;
	}
	return (result);
}
