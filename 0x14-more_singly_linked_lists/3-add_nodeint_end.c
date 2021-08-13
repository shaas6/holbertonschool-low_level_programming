#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the list
 * @head: ptr to head node
 * @n: info
 * Return: address of new node or NULL for failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *old = *head;

	add = malloc(sizeof(listint_t));

	if (!add)
		return (NULL);
	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (old->next != NULL)
		old = old->next;
	old->next = add;

	return (add);
}
