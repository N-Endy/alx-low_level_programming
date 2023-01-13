#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	unsigned int len1, len2, i;
	char *ptr;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}
	if (len2 > n)
		len2 = n;
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
		ptr[i + len1] = s2[i];
	ptr[len1 + len2] = '\0';

	return (ptr);
}


int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
