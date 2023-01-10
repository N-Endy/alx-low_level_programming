#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Returns the concatenated version of both strings
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *_concat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/* get length of strings */
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	len = i + j + 1;

	_concat = malloc(sizeof(char) * len);
	if (_concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		_concat[i] = s1[i];
	for (j = 0; s2[j]; j++)
		_concat[j + i] = s2[j];

	return (_concat);
}
