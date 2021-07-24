#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: counter for s2
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_str;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int y;
	unsigned int z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n < size2)
		size2 = n;
	con_str = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (con_str == NULL)
		return (NULL);

	for (y = 0; s1[y]; y++)
		con_str[y] = s1[y];
	for (z = 0; s2[z] != '\0' && z < n; z++, y++)
		con_str[y] = s2[z];
	con_str[y] = '\0';
	return (con_str);
}
