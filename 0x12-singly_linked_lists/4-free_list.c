#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t
 * @head: pointer
 */

void free_list(list_t *head)
{
	list_t *nodes;

	nodes = NULL;

	while (head)
	{
		free(head->str);
		nodes = head;
		head = head->next;
		free(nodes);
	}
}
