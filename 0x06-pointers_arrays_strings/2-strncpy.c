#include "holberton.h"

/**
 * _strncpy - concatenates two strings by n bytes at most
 * @src: string to be copied
 * @dest: destination string
 * @n: number of characters to append
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
