#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - uses malloc to allocate memory to ptr
 * @b: memory allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
