#include <stdio.h>
#include "main.h"

/**
 * print_array - Print n elements of an array on integers
 * @a: the array
 * @n: the number of items in array
 *
 * Return: no value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n)
		{
			printf("%d, ", *a[i]);
		}
		printf("%d\n", *a[n]);
	}
}
