#include "lists.h"

/**
 * dlistint_len - find number of element in a linked list
 * @h: pointer to header
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
