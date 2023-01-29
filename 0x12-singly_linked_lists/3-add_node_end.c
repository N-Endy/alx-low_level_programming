#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - Adds a new node at the end of the list
 * @head: Head of the node
 * @str: String to be copied
 *
 * Return: Returns address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	/* checks if string is NULL */
	if (str == NULL)
		return (NULL);

	/* allocates memory for new node */
	new = malloc(sizeof(list_t));
	/* checks if memory was properly allocated */
	if (new == NULL)
		return (NULL);
	/* set the str of the new node */
	new->str = strdup(str);
	/* check if str of new node is NULL */
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	/* set length for new node */
	new->len = _strlen(new->str);
	/* set next of new node */
	new->next = NULL;
	/* checks head if NULL to set new node */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* set temp to head if head isn't NULL */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);
}
