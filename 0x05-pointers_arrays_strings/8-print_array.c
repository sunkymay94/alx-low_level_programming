#include "main.h"
#include <stdio.h>

/**
* print_array - prints elements of an rray of integers
* @a: array
* @n: elements to print
*/

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);

		if (m == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
