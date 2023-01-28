#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: list to print
 *
 * Return: Returns a list of element in the node
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	list_t node = h;
	
	// traseverse nodes
	while (node != NULL)
	{
		if (node->str = NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", node->len, node->str);

		n++;
		node = node->next;
	}

	return (n);
}
