#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _strdup - makes copy of string and returns pointer to it
 * @str: origin string
 * Return: Null or point to the new string
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;
	int length = 0;

	if (!str)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	new_str = malloc(sizeof(char) * (length + 1));

	if (!new_str)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[length] = '\0';

	return (new_str);
}
