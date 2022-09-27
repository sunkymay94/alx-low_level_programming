#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of the two diagonals
*		of a square matrix of integers.
* @a: The matrix of integers.
* @size: The size of the matrix.
*/

void print_diagsums(int *a, int size)
{
	int mayor, sum1 = 0, sum2 = 0;

	for (mayor = 0; mayor < size; mayor++)
	{
		sum1 += a[mayor];
		a += size;
	}
	a -= size;

	for (mayor = 0; mayor < size; mayor++)
	{
		sum2 += a[mayor];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
