#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns certain node
 * @head: list head
 * @index: which node
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new;
	unsigned int new_index = 0;

	if (head == NULL)
		return (NULL);

	new = head;
	while (new != NULL)
	{
		if (new_index == index)
			return (new);
		new_index++;
		new = new->next;
	}
	return (NULL);
}
