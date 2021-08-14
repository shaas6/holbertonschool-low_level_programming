#include "lists.h"

/**
 * sum_listint - adds all data together from list
 * @head: first node of int list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
