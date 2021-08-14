#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a llist
 * @head: points to the first node
 * @index: where the nodes at
 * Return: new node's address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *help;
	unsigned int now = 0;

	if (head == NULL)
		return (NULL);

	help = head;
	while (help != NULL)
	{
		if (now == index)
			return (now);
		now++;
		help = help->next;
	}
	return (NULL);
}
