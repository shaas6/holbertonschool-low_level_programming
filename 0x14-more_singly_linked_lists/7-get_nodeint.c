#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a llist
 * @head: points to the first node
 * @index: where the nodes at
 * Return: new node's address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
