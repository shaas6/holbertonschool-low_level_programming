#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints the elements of a linked list
 * @h: head
 * Return: node count
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%u] %p\n", ptr->len, ptr->str);
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
