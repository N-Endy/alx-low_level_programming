#include "main.h"

/**
 * _strncpy - Copies a string
 * @src: String to copy
 * @dest: Destination string to be copied to
 * @n: number of bytes from src
 *
 * Return: Returns the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

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
