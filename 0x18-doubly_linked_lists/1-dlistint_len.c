#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - returns elements from list
 * @h: list head
 * Return: nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *new;
	size_t nodes;

	if (h == NULL)
		return (0);
	new = h;
	for (nodes = 0; new != NULL; nodes++)
	new = new->next;
	return (nodes);
}
