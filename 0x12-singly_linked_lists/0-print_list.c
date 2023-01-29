#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the start of the list
*
* Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *temp;

	temp = h;
	for (i = 0; temp; i++)
	{
		if (temp.str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		temp = temp->next;
	}
	return (i);
}
