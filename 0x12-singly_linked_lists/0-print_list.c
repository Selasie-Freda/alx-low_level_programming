#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a print_t list
 * @h: pointer
 *
 * Description: singly linked node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("%s\n", "[0] (nil)");
		node++;
		h = h->next;
	}
	return (node);
}
