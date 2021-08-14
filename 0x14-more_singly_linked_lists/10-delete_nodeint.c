#include "lists.h"

/**
 * delete_nodeint_at_index - of a linked list
 * @head: first node
 * @index: node being deleted
 * Return: 1 for good, -1 for bad
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *deleted;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	temp = *head;
	while (--index && temp)
		temp = temp->next;
	if (!temp)
		return (-1);
	deleted = temp->next;
	temp->next = deleted->next;
	free(deleted);
	return (1);
}
