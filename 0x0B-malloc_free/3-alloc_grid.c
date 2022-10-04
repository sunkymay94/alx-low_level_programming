#include "main.h"

/**
* alloc_grid - allocates 2D array of int
* @width: width of an array
* @height: height of an array
* Return: a pointer to a allocated grid
*/

int **alloc_grid(int width, int height)
{
	int k, l, m, n;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		a[k] = malloc(width * sizeof(int));
		if (a[k] == NULL)
		{
			for (l = k; l >= 0; l--)
			{
				free(a[l]);
			}
			free(a);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			a[m][n] = 0;
	}
	return (a);
}
