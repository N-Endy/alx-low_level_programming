#include "lists.h"

/**
 * add_nodeint_end - Add new node at the end of a listint_t list
 * @head: Head of the node
 * @n: Data to be added in new node
 *
 * Return: Address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	/* allocate memory for new node and check if allocated */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* set properties of new_node */
	new_node->n = n;
	new_node->next = NULL;

	/* set temp to be same as head */
	temp = *head;

	/* set head to point to new_node if head is NULL */
	if (temp == NULL)
		*head = new_node;
	else
	{
		/* transverse the list */
		while (temp->next != NULL)
			temp = temp->next;
		/* add new_node at the end of list after transverse */
		temp->next = new_node;
	}

	return (new_node);
}
