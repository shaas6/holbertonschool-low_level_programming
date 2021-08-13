#include "lists.h"

/**
 * free_listint - free all the nodes
 * @head: ptr to first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *help;

	while (head != NULL)
	{
		help = head;
		head = head->next;
		free(help);
	}
}
