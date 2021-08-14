#include "lists.h"

/**
 * listint_len - returns num of elements
 * @h: first node
 * Return: number of elems
 */
size_t listint_len(const listint_t *h)
{
	size_t end = 0;

	while (h)
	{
		end++;
		h = h->next;
	}
	return (end);
}

/**
 * insert_nodeint_at_index - inserts new node at given
 * @head: first node
 * @idx: index of the list
 * @n: value of new node
 * Return: address of node for good, NULL for bad
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head;

	if (idx > listint_len(*head))
		return (NULL);
	else if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
	{
		while (idx--)
		{
			if (idx == 0)
			{
				new = malloc(sizeof(listint_t));
				if (!new)
					return (NULL);
				new->n = n;
				new->next = tmp->next;
				tmp->next = new;
			}
			else
				tmp = tmp->next;
		}
	}
	return (new);
}
