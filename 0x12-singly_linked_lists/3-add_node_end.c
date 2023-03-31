#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer head
 * @str: string
 * Return: address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *node;

	end = malloc(sizeof(list_t));

	if (end == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	end->str = strdup(str);
	end->len = strlen(str);
	end->next = NULL;

	node = *head;

	if (node != NULL)
	{
		while (node->next != 0)
		{
			node = node->next;
		}
		node->next = end;
	}
	else
	{
		*head = end;
	}
	return (end);
}
