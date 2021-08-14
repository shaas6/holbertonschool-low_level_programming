#include "lists.h"

/**
 * free_listint2 - free all the nodes, head is NULL
 * @head: ptr to first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *help, *please;

	if (head == NULL)
		return;
	please = *head;

	while (please != NULL)
	{
		help = please->next;
		free(please);
		please = help;
	}
	*head = NULL;
}
