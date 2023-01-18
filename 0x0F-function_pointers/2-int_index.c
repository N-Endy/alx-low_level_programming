#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array to be iterated
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ele;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ele = cmp(array[i])
			if (ele)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
