#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print a list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *now;
	size_t node = 0;

	if (h == NULL)
		return (node);
	now = h;

	while (now != NULL)
	{
		printf("%d\n", now->n);
		node++;
		now = now->next;
	}
	return (node);
}
