#include "main.h"

/**
 * reverse_array - Reverse the content on an array
 * @a: pointer to the array
 * @n: the number of elements to swap
 *
 * Return: no return value
 */
void reverse_array(int *a, int n)
{
	int i, c, temp;

	i = n - 1;
	c = 0;

	for ( ; i >= 0; i--)
	{
		temp = a[c];
		a[c] = a[i];
		a[i] = temp;
		c++;
	}
}
