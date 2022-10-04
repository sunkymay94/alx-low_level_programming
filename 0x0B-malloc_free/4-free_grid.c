#include "main.h"

/**
* free_grid -frees memory allocation
* @grid: grid to be freed
* @height: height of the matrix
* Return: Always success
*/

void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
		free(grid[b]);
	free(grid);
}
