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
	size_t count = 0;
	const list_t *temp;

	temp = h;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", temp->len, temp->str);

		temp = temp->next;
		count++;
	}
	return (count);
}
