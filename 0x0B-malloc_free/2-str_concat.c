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
	unsigned int i, j, k, len;
	char *_concat;

	/**
	 * take strings as empty string if NULL and check length if
	 * not NULL
	 */
	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	len = i + j + 1;

	/* allocate memory space */
	_concat = malloc(sizeof(char) * len);
	if (_concat == NULL)
		return (NULL);

	/* concatinate both strings */
	for (k = 0; l < i; k++)
		_concat[k] = s1[k];
	for (k = 0; k < j; k++)
		_concat[k + i] = s2[k];
	_concat[j + i] = '\0';

	return (_concat);
}
