#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: ptr to head node
 * Return: deleted node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head, *temp;
	int info;

	if (*head == NULL)
		return (0);
	temp = *head;
	info = temp->n;
	*head = new->next;
	free(temp);
	return (info);
}
