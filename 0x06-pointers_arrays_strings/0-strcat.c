#include "holberton.h"

/**
 * _strcat - Concatenates two strings
 * @src: string to be added to another string
 * @dest: string being added to
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + _strlen(dest);

	while (*src != '\0')
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
