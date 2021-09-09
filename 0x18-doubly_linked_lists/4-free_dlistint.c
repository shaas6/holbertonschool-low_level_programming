#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - frees the list
 * @head: list head
 * Return: nada
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freeatlast;

	while (head != NULL)
	{
		freeatlast = head->next;
		free(head);
		head = freeatlast;
	}
}
