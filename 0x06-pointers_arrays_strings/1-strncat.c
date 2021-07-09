#include "holberton.h"

/**
 * _strncat - concatenates two strings by n bytes
 * @src: string to be copied
 * @dest: destination string
 * @n: number of characters to append
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
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
