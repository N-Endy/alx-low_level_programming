#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: string whose memory is pointed at
 * @b: the constant byte to be filled
 * @n: number of n bytes to be filled of memory area
 *
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
