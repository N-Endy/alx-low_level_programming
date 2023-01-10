#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Gives a pointer to 2 dimensional array of integers
 * @width: row
 * @height: column
 *
 * Return: Returns pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	int **arr;

	arr = (int *) malloc(sizeof(int *) * width * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
