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

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ele = cmp(array[i])
			if (ele == 0)
			{
				break;
				return (i);
			}
		}
	}
	return (-1);
}
