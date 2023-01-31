#include "lists.h"

/**
 * listint_len - Gives the number of elements in a linked list
 * @h: Head of the list
 *
 * Return: The numeber of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp; /* temp variable to transverse list */
	size_t count = 0; /* count for number of elements */

	/* checks if h is NULL */
	if (h == NULL)
		return (0);

	temp = h;
	/* transverse the list, while next of node is not NULL */
	while (temp != NULL)
	{
		/* set temp to next node */
		temp = temp->next;
		count++; /* increase count by one */
	}

	return (count);
}
