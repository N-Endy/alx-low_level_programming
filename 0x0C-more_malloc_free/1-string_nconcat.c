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
	unsigned int len1, len2, i;

	if (s1 == NULL)
		len1 = 0;
	else /* get length of strings */
		for (i = 0; s1[i]; i++)
			len1++;
	if (s2 == NULL)
		len2 = 0;
	else /* get length of string */
		for (i = 0; s2[i]; i++)
		len2++;

	/* copies all string if n is greater or equal len2 */
	if (n >= len2)
		len2 = n;
	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; s2[i]; i++)
		ptr[len1 + i] = s2[i];
	ptr[len1 + i] = '\0';

	return (ptr);
}
