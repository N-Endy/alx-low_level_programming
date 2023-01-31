#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Head of the list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;

	while (current->next != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
