#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates 2 strings using n number of bytes
 * @s1: string one
 * @s2: string two
 * @n: n number of bytes
 *
 * Return: Returns pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len2;

	/* return NULL if string is empty */
	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/* get length of second string */
	len2 = sizeof(s2) - 1;

	if (n >= len2)
	{
		ptr = malloc(sizeof(*s1) + sizeof(*s2) - 1);
		for (i = 0; s1[i]; i++)
			ptr[i] = s1[i];
		for (; s2[i]; i++)
			ptr[i] = s2[i];
	}
	else
	{
		ptr = malloc(sizeof(*s1) + n - 1);
		for (i = 0; s1[i]; i++)
			ptr[i] = s1[i];
		for (j = 0; j < n; i++)
			ptr[i + j] = s2[j];
	}

	free(ptr);
	return (ptr);
}
