#include "lists.h"

/**
 * print_listint - Prints all the element of a listint_t list
 * @h: The head of the list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp; /* to hold node on movement across list */
	size_t count = 0; /* for counting number of nodes */

	/* st temp to head of node */
	temp = h;
	/* chcks if h is NULL */
	if (h == NULL)
		return (0);

	/* transverse the list */
	while (temp != NULL)
	{
		/* print n value of node */
		printf("%d\n", temp->n);
		/* set temp to address of next node */
		temp = temp->next;
		/* increase count to reflect steps */
		count++;
	}

	return (count);
}
