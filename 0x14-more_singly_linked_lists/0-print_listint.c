#include "lists.h"

/**
 * print_listint - print entire singly linked list
 * @h: pointer to head node
 * Return: node count
 */
size_t print_listint(const listint_t *h)
{
	int z;

	for (z = 0; h != NULL; z++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (z);
}
