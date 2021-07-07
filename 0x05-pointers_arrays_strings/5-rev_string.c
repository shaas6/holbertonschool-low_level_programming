#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: string itself
 * Return: 0
 */
void rev_string(chas *s)
{
	int i = 0;
	int j = 0;
	int extra = 0;

	j = _strlen(s) - 1;
	while (i < j)
	{
	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
	i++;
	j--;
	}
}
/**
 * _strlen - returns the length of a string
 * @s: string being checked
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int num;

	num = 0;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	return (num);
}
