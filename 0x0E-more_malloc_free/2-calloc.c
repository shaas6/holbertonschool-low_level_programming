#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: bytes for each element
 * Return: pointer to mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int y;

	if (nmemb == 0 || size == 0 )
		return (NULL);
	array = malloc(nmemb * size);
	if (array)
	{
		for (y = 0; y < (nmemb * size); y++)
			array[y] = 0;
	}
}
