#include "lists.h"

/**
 * listint_len - count the nodes in listint
 * @h: points to head node
 * Return: how many nodes
 */
size_t listint_len(const listint_t *h)
{
	int z;

	for (z = 0; h != NULL; z++)
		h = h->next;
	return (z);
}
