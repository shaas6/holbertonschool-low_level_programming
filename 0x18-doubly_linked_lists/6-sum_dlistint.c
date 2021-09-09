#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - gets the sum of all nodes
 * @head: list head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *new;
	int sum = 0;

	if (head == NULL)
		return (0);
	new = head;
	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
