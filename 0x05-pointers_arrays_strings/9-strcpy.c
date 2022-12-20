#include "main.h"

/**
 * _strcpy - Copies the string from src to dest
 * @dest: The position string is copied to
 * @src: The string copied from
 *
 * Return Returns a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] <= '\0'; i++)
		dest[i] = src[i];

	return (*dest);
}
