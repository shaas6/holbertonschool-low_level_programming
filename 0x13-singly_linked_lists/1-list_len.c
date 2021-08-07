#include "lists.h"

/**
 * list_len - return count of elements in list_t
 * @h: head, pointer to list
 * Return: list size
 */
size_t list_len(const list_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
		h = h->next;
	return (len);
}
