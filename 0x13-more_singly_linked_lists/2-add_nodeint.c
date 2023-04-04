#include "lists.h"
#include <stddef.h>
/**
 * add_nodeint - adds a new node
 * @head: the head of the double pointer
 * @n: adds the list
 * Return: NULL if the code fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
		return (node);
}
