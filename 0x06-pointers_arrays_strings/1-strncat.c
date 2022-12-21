#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @src: First string
 * @dest: Destination string to be concatenated with
 * @n: number of bytes from src
 *
 *Return: Retuns a string containing words from previous two
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/**
	 * Checks if there are no null bytes in first n
	 * bytes of src
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/**
	 * If i is still less than n, it writes additional
	 * null bytes
	 */
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
