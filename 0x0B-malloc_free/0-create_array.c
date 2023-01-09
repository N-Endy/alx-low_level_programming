#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates an array of chars and initialize with
 * specific char.
 * @size: Size of intending array.
 * @c: Character to be placed in the array.
 *
 * Return: Returns pointer to the array or NULL.
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	int *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(unsigned int) * size);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr || NULL);
}
