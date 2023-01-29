#include "lists.h"
#include <stdio.h>

/**
* list_len - prints all the elements of a list_t list
* @h: pointer to the start of the list
*
* Return: number of elements in the list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	temp = h;
	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
