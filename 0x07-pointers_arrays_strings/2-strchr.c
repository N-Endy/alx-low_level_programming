#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string to be searched
 * @c: Character to be checked for
 *
 * Return: Returns a pointer to first occurence of char c or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}
