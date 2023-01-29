#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @str: string whose length needs to found
 *
 * Return: length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++);

	return (i);
}

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: Head of the list
 * @str: String to be added
 *
 * Return: Returns address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* return NULL if string is NULL */
	if (str == NULL)
		return (NULL);
	/* allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	/* return NULL is allocation fails */
	if (new_node == NULL)
		return (NULL);
	/* set node str to duplicate of str */
	new_node->str = strdup(str);
	/* release node if strdup fails */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* set node len to length of str */
	new_node->len = _strlen(str);
	/* set next of node to the current head of list */
	new_node->next = *head;
	/* set head of list to node */
	*head = new_node;

	return (new_node);
}
