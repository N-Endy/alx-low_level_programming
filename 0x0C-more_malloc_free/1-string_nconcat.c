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
	unsigned int len1, len2;
	unsigned int i;

	/* return NULL if string is empty */
	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/* get length of strings */
	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;

	/* copies ull string if n is greater or equal len2 */
	if (n >= len2)
	{
		ptr = malloc(len1 + len2 + 1);

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < len1; i++)
			ptr[i] = s1[i];
		for (i = 0; s2[i]; i++)
			ptr[len1 + i] = s2[i];
		ptr[len1 + i] = '\0';
	}
	else if (n < len2 && n > 0)
	{
		ptr = malloc(len1 + n + 1);
		if (ptr == NULL)
			return (NULL);

		for (i = 0; s1[i]; i++)
			ptr[i] = s1[i];
		for (i = 0; i < n; i++)
			ptr[len1 + i] = s2[i];
		ptr[len1 + i] = '\0';
	}

	return (ptr);
}
