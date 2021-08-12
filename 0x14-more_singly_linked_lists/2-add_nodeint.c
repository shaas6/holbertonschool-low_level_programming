#include "lists.h"

/**
 * add_nodeint - add a node at the start of a singly linked list
 * @head: pointer to head node
 * @n: info
 * Return: address to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *hello;

	hello = malloc(sizeof(listint_t));
	if (!hello)
		return (NULL);
	hello->n = n;
	hello->next = *head;

	*head = hello;
	return (hello);
}
