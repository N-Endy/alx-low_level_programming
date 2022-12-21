#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @src: First string
 * @dest: Destination string to be concatenated with
 * @n: number of bytes from src
 *
 *Return: Retuns a string containing words from previous two
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	/* Get the length of the dest string */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Add src string to dest starting from end of dest */
	for (j = 0; j <= n; j++)
		dest[i++] = src[j];

	return (dest);
}
