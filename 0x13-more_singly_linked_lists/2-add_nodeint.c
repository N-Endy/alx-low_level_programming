#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a listint_t lis
 * @head: Head of the list
 * @n: Data to be added in new node
 *
 * Return: The address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* checks if head is NULL */
	if (*head == NULL)
		return (NULL);

	/* allocates memory for new_node */
	new_node = malloc(sizeof(listint_t));
	/* checks if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);
	/* set data of new_node */
	new_node->n = n;
	/* set the address of previous first node to new_node->next */
	new_node->next = *head;
	/* set head to point to new_node */
	*head = new_node;

	return (new_node);
}
