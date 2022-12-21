#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @src: First string
 * @dest: Destination string to be concatenated with
 *
 *Return: Retuns a string containing words from previous two
 */
char *_strncat(char *dest, char *src)
{
	int i, j;

	/* Get the length of the dest string */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Add src string to dest starting from end of dest */
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i++] = src[j];
	/* null terminate dest */
	dest[i + j] = '\0';

	return (dest);
}
