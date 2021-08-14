#include "lists.h"

/**
 * free_listint2 - free all the nodes, head is NULL
 * @head: ptr to first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *help;

	while (head != NULL)
	{
		help = *head;
		*head = help->next;
		free(help);
	}
	free(*head);
	*head = NULL;
}
