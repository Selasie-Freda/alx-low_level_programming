#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list
 * @head: pointer to head
 * @index: index of the node, starting from 0
 * Return: 0 if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;

	if (head == NULL)
		return (NULL);
	for (node = 0; head != NULL; node++)
	{
		if (node == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
