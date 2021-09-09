#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - print a list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *now = NULL;
	unsigned int node = 0;

	if (h)
	{
		now = h;
		while (now)
		{
			printf("%d\n", now->n);
			now = now->next;
			node++;
		}
	}
	return (node);
}
