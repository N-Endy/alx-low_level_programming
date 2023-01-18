#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an arr
 * @array: Array to be iterated
 * @size: size of the array
 * @action: Pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
