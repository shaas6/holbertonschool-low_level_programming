#include "function_pointers.h"
#include "stdio.h"

/**
 * int_index - searches for ints based on parameters
 * @array: array
 * @size: size of array
 * @cmp: function to compare
 * Return: integer or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
		if ((*cmp)(array[x]) != 0)
			return (x);
	return (-1);
}
