#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates array of ints
 * @min: start of range
 * @max: end of range
 * Return: array with range of ints
 */
int *array_range(int min, int max)
{
	int *array = 0;
	int size = 0;
	int x = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		array[x] = min;
		min++;
	}
	return (array);
}
